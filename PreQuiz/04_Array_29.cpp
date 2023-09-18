#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rectangle {
    int x1, y1, x2, y2, id;
};

int overlap(Rectangle a, Rectangle b) {
    int left = max(a.x1, b.x1);
    int right = min(a.x2, b.x2);
    int bottom = max(a.y1, b.y1);
    int top = min(a.y2, b.y2);

    if (right > left && top > bottom)
        return (right - left) * (top - bottom);
    else
        return 0;
}

int main() {
    int N;
    cin >> N;

    vector<Rectangle> rectangles(N);
    for (int i = 0; i < N; i++) {
        cin >> rectangles[i].x1 >> rectangles[i].y1 >> rectangles[i].x2 >> rectangles[i].y2;
        rectangles[i].id = i;
    }

    int max_overlap = 0;
    vector<pair<int, int>> max_pairs;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int overlap_area = overlap(rectangles[i], rectangles[j]);
            if (overlap_area > max_overlap) {
                max_overlap = overlap_area;
                max_pairs.clear();
                max_pairs.push_back(make_pair(rectangles[i].id, rectangles[j].id));
            } else if (overlap_area == max_overlap) {
                max_pairs.push_back(make_pair(rectangles[i].id, rectangles[j].id));
            }
        }
    }

    if (max_overlap > 0) {
        cout << "Max overlapping area = " << max_overlap << endl;
        for (auto p : max_pairs)
            cout << "rectangles " << p.first << " and " << p.second << endl;
    } else {
        cout << "No overlaps" << endl;
    }

    return 0;
}
