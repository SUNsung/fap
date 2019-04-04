
        
            def write(header)
      @cookies.select { |key, _value| @send_cookies[key] == true }.each do |name, value|
        cookie_value = value.is_a?(Hash) ? value : { value: value }
        Rack::Utils.set_cookie_header! header, name, cookie_value
      end
    end
    
    module Grape
  module DSL
    # Keeps track of settings (implemented as key-value pairs, grouped by
    # types), in two contexts: top-level settings which apply globally no
    # matter where they're defined, and inheritable settings which apply only
    # in the current scope and scopes nested under it.
    module Settings
      extend ActiveSupport::Concern
    
        it 'is thread specific threadsafe true' do
      Capybara.threadsafe = true
      Capybara.current_driver = :selenium
      thread = Thread.new do
        Capybara.current_driver = :random
      end
      thread.join
      expect(Capybara.current_driver).to eq :selenium
    end
  end
    
      it 'should not accept the prompt if the message doesn't match' do
    expect do
      @session.accept_prompt 'Incorrect Text', with: 'not matched' do
        @session.click_link('Open prompt')
      end
    end.to raise_error(Capybara::ModalNotFound)
  end
    
      context 'with xpath selectors' do
    it 'should find the first element using the given locator' do
      el = @session.find(:css, '#first_image')
      expect(el.ancestor(:xpath, '//p')).to have_text('Lorem ipsum dolor')
      expect(el.ancestor(:xpath, '//a')[:'aria-label']).to eq('Go to simple')
    end
  end
    
        it 'doesn't find invisible elements when `true`' do
      expect do
        @session.find_by_id('hidden_via_ancestor', visible: true)
      end.to raise_error(Capybara::ElementNotFound)
    end
  end
end
