
        
          spec.files         = %w[
    LICENSE.txt
    README.md
    ext/etc/constdefs.h
    ext/etc/etc.c
    ext/etc/extconf.rb
    ext/etc/mkconstants.rb
    stub/etc.rb
    test/etc/test_etc.rb
  ]
  spec.bindir        = 'exe'
  spec.require_paths = ['lib']
  spec.extensions    = %w{ext/etc/extconf.rb}
    
        @io = StringIO.new @zip
    @gzreader = Zlib::GzipReader.new @io
  end
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
      after do
    (@session.windows - [orig_window]).each do |w|
      @session.switch_to_window w
      w.close
    end
    @session.switch_to_window(orig_window)
  end
    
        expect(@session.driver).to have_received(:save_screenshot)
      .with(/#{custom_path}$/, {})
    expect(Launchy).to have_received(:open).with(/#{custom_path}$/)
  end
    
          def html_content?
        /html/.match?(@headers['Content-Type'])
      end
    
        ##
    #
    # Modify a selector previously created by {Capybara.add_selector}.
    # For example, adding a new filter to the :button selector to filter based on
    # button style (a class) might look like this
    #
    #     Capybara.modify_selector(:button) do
    #       filter (:btn_style, valid_values: [:primary, :secondary]) { |node, style| node[:class].split.include? 'btn-#{style}' }
    #     end
    #
    #
    # @param [Symbol] name    The name of the selector to modify
    # @yield                  A block executed in the context of the existing {Capybara::Selector}
    #
    def modify_selector(name, &block)
      Capybara::Selector.update(name, &block)
    end
    
          def resolves_for?(session)
        uri = ::Addressable::URI.parse(session.current_url)
        uri&.query = nil if options[:ignore_query]
        @actual_path = options[:url] ? uri&.to_s : uri&.request_uri
    
          def failure_message
        failure_message_helper
      end
    
      it 'should be false if the element does not have the given style' do
    expect(@session.find(:css, '#first').matches_style?('display' => 'inline')).to be false
    expect(@session.find(:css, '#second').matches_style?(display: 'block')).to be false
  end
    
    Then /^I should see the scope '([^']*)' with no count$/ do |name|
  name = name.tr(' ', '').underscore.downcase
  expect(page).to     have_css '.scopes .#{name}'
  expect(page).to_not have_css '.scopes .#{name} .count'
end
    
          # Either add/remove the batch action
      unless options == false
        config.add_batch_action(sym, title, options, &block)
      else
        config.remove_batch_action sym
      end
    end