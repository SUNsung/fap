
        
        # These drivers are only used for testing driver switching.
# They don't actually need to process javascript so use RackTest
    
      context 'with custom selector' do
    it 'should use the custom selector' do
      Capybara.add_selector(:level) do
        xpath { |num| './/*[@id='ancestor#{num}']' }
      end
      el = @session.find(:css, '#child')
      expect(el.ancestor(:level, 1)[:id]).to eq 'ancestor1'
      expect(el.ancestor(:level, 3)[:id]).to eq 'ancestor3'
    end
  end
    
        it 'doesn't find invisible elements when `true`' do
      expect do
        @session.find_by_id('hidden_via_ancestor', visible: true)
      end.to raise_error(Capybara::ElementNotFound)
    end
  end
end

    
      context 'aria_label attribute with Capybara.enable_aria_label' do
    it 'should find when true' do
      Capybara.enable_aria_label = true
      expect(@session.find_link('Go to simple')[:href]).to match %r{/with_simple_html$}
    end