
        
        GRADE_COLOR_1 = COLOR_HEADS = RED_E
GRADE_COLOR_2 = COLOR_TAILS = BLUE_C
    
    class Dodecahedron(Mobject1D):
    def generate_points(self):
        phi = (1 + np.sqrt(5)) / 2
        x = np.array([1, 0, 0])
        y = np.array([0, 1, 0])
        z = np.array([0, 0, 1])
        v1, v2 = (phi, 1/phi, 0), (phi, -1/phi, 0)
        vertex_pairs = [
            (v1, v2),
            (x+y+z, v1),
            (x+y-z, v1),
            (x-y+z, v2),
            (x-y-z, v2),
        ]
        five_lines_points = Mobject(*[
            Line(pair[0], pair[1], density = 1.0/self.epsilon)
            for pair in vertex_pairs
        ]).points
        #Rotate those 5 edges into all 30.
        for i in range(3):
            perm = [j%3 for j in range(i, i+3)]
            for b in [-1, 1]:
                matrix = b*np.array([x[perm], y[perm], z[perm]])
                self.add_points(np.dot(five_lines_points, matrix))
        self.pose_at_angle()
        self.set_color(GREEN)
    
        def coords_to_center(self, n, k):
        x_offset = self.cell_width * (k + self.nrows / 2.0 - n / 2.0)
        y_offset = self.cell_height * (self.nrows - n)
        return self.bottom_left + x_offset * RIGHT + y_offset * UP
    
        def add_braces_and_labels(self):
        for attr in 'horizontal_parts', 'vertical_parts':
            if not hasattr(self, attr):
                continue
            parts = getattr(self, attr)
            for subattr in 'braces', 'labels':
                if hasattr(parts, subattr):
                    self.add(getattr(parts, subattr))
    
    
def random_bright_color():
    color = random_color()
    curr_rgb = color_to_rgb(color)
    new_rgb = interpolate(
        curr_rgb, np.ones(len(curr_rgb)), 0.5
    )
    return Color(rgb=new_rgb)
    
            self.assertEqual(response.status_code, 405)