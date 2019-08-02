
        
          def test_pretty_print_new
    topic = Topic.new
    actual = +''
    PP.pp(topic, StringIO.new(actual))
    expected = <<~PRETTY
      #<Topic:0xXXXXXX
       id: nil,
       title: nil,
       author_name: nil,
       author_email_address: 'test@test.com',
       written_on: nil,
       bonus_time: nil,
       last_read: nil,
       content: nil,
       important: nil,
       approved: true,
       replies_count: 0,
       unique_replies_count: 0,
       parent_id: nil,
       parent_title: nil,
       type: nil,
       group: nil,
       created_at: nil,
       updated_at: nil>
    PRETTY
    assert actual.start_with?(expected.split('XXXXXX').first)
    assert actual.end_with?(expected.split('XXXXXX').last)
  end
    
        self.use_transactional_tests = false
    
    class ValidationsTest < ActiveRecord::TestCase
  fixtures :topics, :developers
    
                {% include_relative missing.html %}
          CONTENT
        end
    
    WITH_JUST_LIQUID_VAR = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. et metus fermentum, eu cursus lorem, ac dictum enim.
mattis. Curabitur vel dui et lacus rutrum suscipit et {{ title }} neque.
    
          def self.service_object
        service_object = Object.new
        service_object.class.module_eval { attr_accessor :__hash__ }
        service_object.__hash__ = {}
        Produce::DeveloperCenter::ALLOWED_SERVICES.keys.each do |service|
          name = self.services_mapping[service]
          service_object.class.module_eval { attr_accessor :'#{name}' }
        end
        service_object
      end
    
            UI.success('Successfully exported CSV to #{file}')
      end
    end
    
          attr_mapping({
        'installCount' => 'install_count',
        'crashCount' => 'crash_count',
        'sessionCount' => 'session_count',
        'betaTesterState' => 'beta_tester_state',
        'lastModifiedDate' => 'last_modified_date',
        'installedCfBundleShortVersionString' => 'installed_cf_bundle_short_version_string',
        'installedCfBundleVersion' => 'installed_cf_bundle_version'
      })
    
          attr_mapping({
        'autoNotifyEnabled' => 'auto_notify_enabled',
        'didNotify' => 'did_notify',
        'internalBuildState' => 'internal_build_state',
        'externalBuildState' => 'external_build_state'
      })
    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        return users_client.get_users(filter: filter, includes: includes)
      end
    
          module Status
        ENABLED = 'ENABLED'
        DISABLED = 'DISABLED'
      end
    
        def pos
      byte_to_str_pos @s.pos
    end
    
      # Enable serving of images, stylesheets, and JavaScripts from an asset server.
  # config.action_controller.asset_host = 'http://assets.example.com'
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
            def session_options
          @context_el ||= nil
          if @context_el.respond_to? :session_options
            @context_el.session_options
          elsif @context_el.respond_to? :current_scope
            @context_el.current_scope.session_options
          else
            Capybara.session_options
          end
        end
      end
    
    require 'capybara/rspec/matchers/base'
    
    class Capybara::Selenium::SafariNode < Capybara::Selenium::Node
  # include Html5Drag
    
        expect do
      expect(el).to have_ancestor(:css, 'div').once
    end.to raise_error(RSpec::Expectations::ExpectationNotMetError)
    
    Capybara::SpecHelper.spec '#save_screenshot', requires: [:screenshot] do
  let(:alternative_path) { File.join(Dir.pwd, 'save_screenshot_tmp') }
  before do
    @old_save_path = Capybara.save_path
    Capybara.save_path = nil
    @session.visit '/foo'
  end
    
        if radio? then set_radio(value)
    elsif checkbox? then set_checkbox(value)
    elsif input_field? then set_input(value)
    elsif textarea? then native['_capybara_raw_value'] = value.to_s
    end
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
    
              before :each, :exact_false do
            Capybara.exact = false
          end
          # rubocop:enable RSpec/ScatteredSetup
    
    Capybara::SpecHelper.log_selenium_driver_version(Selenium::WebDriver::Edge) if ENV['CI']
    
      it 'can scroll an element to the bottom of the viewport' do
    el = @session.find(:css, '#scroll')
    @session.scroll_to(el, align: :bottom)
    el_bottom = el.evaluate_script('this.getBoundingClientRect().bottom')
    viewport_bottom = el.evaluate_script('document.body.clientHeight')
    expect(el_bottom).to be_within(1).of(viewport_bottom)
  end
    
    require 'spec_helper'
require 'selenium-webdriver'
require 'shared_selenium_session'
require 'shared_selenium_node'
require 'rspec/shared_spec_matchers'
    
      context 'with text' do
    it 'should discard all matches where the given string is not contained' do
      expect(@session).not_to have_no_css('p a', text: 'Redirect', count: 1)
      expect(@session).to have_no_css('p a', text: 'Doesnotexist')
    end