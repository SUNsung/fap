
        
        
    def run(self):
        self.connector_screenshot()
        self.image = plt.imshow(self._read_image(), animated=True)
        self.action()
    
        click_count += 1
    if click_count > 1:
        click_count = 0
        cor1 = cor.pop()
        cor2 = cor.pop()