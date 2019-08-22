
        
            # Ensure the file is removed
    project.bfg_object_map.remove!
    notification_service.repository_cleanup_failure(project, user, error)
  end
    
          encrypted_token = Base64.decode64(value)
      Encryptor.decrypt(AES256_GCM_OPTIONS.merge(value: encrypted_token))
    end
  end
end

    
            @decoded
      end
    
              @diffable = diffable
          @include_stats = diff_options.delete(:include_stats)
          @project = project
          @diff_options = diff_options
          @diff_refs = diff_refs
          @fallback_diff_refs = fallback_diff_refs
          @repository = project.repository
        end
    
          it 'adds svn arguments for :revision' do
        expect(subject).to receive(:system_command!) { |*, args:, **|
          expect(args.each_cons(2)).to include(['-r', '10'])
        }
    
        it 'can process' do
      mgr = Mgr.new
    
    ExceptionHandlerTestException = Class.new(StandardError)
TEST_EXCEPTION = ExceptionHandlerTestException.new('Something didn't work!')
    
    describe Sidekiq::Extensions do
  before do
    Sidekiq.redis {|c| c.flushdb }
  end
    
      it 'shuts down the system' do
    mgr = new_manager(options)
    mgr.stop(::Process.clock_gettime(::Process::CLOCK_MONOTONIC))
  end
    
      steps %{
    And I turn off class caching
    And I write to 'Gemfile' with:
      '''
      source 'http://rubygems.org'
      gem 'rails', '#{framework_version}'
      gem 'sqlite3', :platform => [:ruby, :rbx]
      gem 'activerecord-jdbcsqlite3-adapter', :platform => :jruby
      gem 'jruby-openssl', :platform => :jruby
      gem 'capybara'
      gem 'gherkin'
      gem 'aws-sdk-s3'
      gem 'racc', :platform => :rbx
      gem 'rubysl', :platform => :rbx
      '''
    And I remove turbolinks
    And I comment out lines that contain 'action_mailer' in 'config/environments/*.rb'
    And I empty the application.js file
    And I configure the application to use 'paperclip' from this project
  }
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
        # True if the dimensions represent a horizontal rectangle
    def horizontal?
      height < width
    end
    
          class HaveNoSelectors < WrappedElementMatcher
        def element_matches?(el)
          el.assert_none_of_selectors(*@args, &@filter_block)
        end
    
          private
    
          def attribute_conditions(attributes)
        attributes.map do |attribute, value|
          case value
          when XPath::Expression
            raise ArgumentError, 'XPath expressions are not supported for the :#{attribute} filter with CSS based selectors'
          when Regexp
            Selector::RegexpDisassembler.new(value).substrings.map do |str|
              '[#{attribute}*='#{str}'#{' i' if value.casefold?}]'
            end.join
          when true
            '[#{attribute}]'
          when false
            ':not([attribute])'
          else
            if attribute == :id
              '##{::Capybara::Selector::CSS.escape(value)}'
            else
              '[#{attribute}='#{value}']'
            end
          end
        end.join
      end
    
      after do
    Capybara.save_path = @old_save_path
    FileUtils.rm_rf alternative_path
  end
    
        ##
    # @!method always_include_port
    #   See {Capybara.configure}
    # @!method run_server
    #   See {Capybara.configure}
    # @!method default_selector
    #   See {Capybara.configure}
    # @!method default_max_wait_time
    #   See {Capybara.configure}
    # @!method ignore_hidden_elements
    #   See {Capybara.configure}
    # @!method automatic_reload
    #   See {Capybara.configure}
    # @!method match
    #   See {Capybara.configure}
    # @!method exact
    #   See {Capybara.configure}
    # @!method raise_server_errors
    #   See {Capybara.configure}
    # @!method visible_text_only
    #   See {Capybara.configure}
    # @!method automatic_label_click
    #   See {Capybara.configure}
    # @!method enable_aria_label
    #   See {Capybara.configure}
    # @!method save_path
    #   See {Capybara.configure}
    # @!method asset_host
    #   See {Capybara.configure}
    # @!method default_host
    #   See {Capybara.configure}
    # @!method app_host
    #   See {Capybara.configure}
    # @!method server_host
    #   See {Capybara.configure}
    # @!method server_port
    #   See {Capybara.configure}
    # @!method server_errors
    #   See {Capybara.configure}
    # @!method default_set_options
    #   See {Capybara.configure}
    # @!method disable_animation
    #   See {Capybara.configure}
    # @!method test_id
    #   See {Capybara.configure}
    # @!method default_normalize_ws
    #   See {Capybara.configure}
    # @!method w3c_click_offset
    #   See {Capybara.configure}
    
        def extract_results(session)
      expect(session).to have_xpath('//pre[@id='results']')
      # YAML.load Nokogiri::HTML(session.body).xpath('//pre[@id='results']').first.inner_html.lstrip
      YAML.load Capybara::HTML(session.body).xpath('//pre[@id='results']').first.inner_html.lstrip
    end
    
    Capybara::SpecHelper.run_specs TestSessions::Safari, SAFARI_DRIVER.to_s, capybara_skip: skipped_tests do |example|
  case example.metadata[:full_description]
  when /click_link can download a file/
    skip 'safaridriver doesn't provide a way to set the download directory'
  when /Capybara::Session selenium_safari Capybara::Window#maximize/
    pending 'Safari headless doesn't support maximize' if ENV['HEADLESS']
  when /Capybara::Session selenium_safari #visit without a server/,
       /Capybara::Session selenium_safari #visit with Capybara.app_host set should override server/,
       /Capybara::Session selenium_safari #reset_session! When reuse_server == false raises any standard errors caught inside the server during a second session/
    skip 'Safari webdriver doesn't support multiple sessions'
  when /Capybara::Session selenium_safari #click_link with alternative text given to a contained image/,
       'Capybara::Session selenium_safari #click_link_or_button with enable_aria_label should click on link'
    pending 'safaridriver thinks these links are non-interactable for some unknown reason'
  when /Capybara::Session selenium_safari #attach_file with a block can upload by clicking the file input/
    skip 'safaridriver doesn't allow clicking on file inputs'
  when /Capybara::Session selenium_safari #within_frame works if the frame is closed/,
       /Capybara::Session selenium_safari #switch_to_frame works if the frame is closed/
    skip 'Safari has a race condition when clicking an element that causes the frame to close. It will sometimes raise a NoSuchFrameError'
  when /Capybara::Session selenium_safari #reset_session! removes ALL cookies/
    skip 'Safari webdriver can only remove cookies for the current domain'
  when /Capybara::Session selenium_safari #refresh it reposts/
    skip 'Safari opens an alert that can't be closed'
  when 'Capybara::Session selenium_safari node #double_click should allow to adjust the offset',
       'Capybara::Session selenium_safari node #double_click should double click an element'
    pending 'safardriver doesn't generate a double click event'
  when 'Capybara::Session selenium_safari node #click should allow multiple modifiers',
       /Capybara::Session selenium_safari node #(click|right_click|double_click) should allow modifiers/
    pending 'safaridriver doesn't take key state into account when clicking'
  when 'Capybara::Session selenium_safari #fill_in on a pre-populated textfield with a reformatting onchange should trigger change when clearing field'
    pending 'safardriver clear doesn't generate change event'
  when 'Capybara::Session selenium_safari #go_back should fetch a response from the driver from the previous page',
       'Capybara::Session selenium_safari #go_forward should fetch a response from the driver from the previous page'
    skip 'safaridriver loses the ability to find elements in the document after `go_back`'
  when /drag_to.*HTML5/
    pending 'Safari doesn't support'
  end
end
    
          def failure_message_helper(negated = '')
        verb = @expected_title.is_a?(Regexp) ? 'match' : 'include'
        'expected #{@actual_title.inspect}#{negated} to #{verb} #{@expected_title.inspect}'
      end