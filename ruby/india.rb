
        
                      when_connected do
                send_command('unsubscribe')
                @raw_client = nil
              end
            end
    
            def test_spec_name_with_inline_config
          spec = spec('adapter' => 'sqlite3')
          assert_equal 'primary', spec.name, 'should default to primary id'
        end
      end
    end
  end
end

    
        class TestCallbacksWithArgs < ActiveSupport::TestCase
      test 'callbacks still work when invoking process with multiple arguments' do
        controller = CallbacksWithArgs.new
        controller.process(:index, ' Howdy!')
        assert_equal 'Hello world Howdy!', controller.response_body
      end
    end
  end
end

    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
    FIXTURE_LOAD_PATH = File.expand_path('fixtures', __dir__)
ActionMailer::Base.view_paths = FIXTURE_LOAD_PATH
    
    class ActionMailerI18nWithControllerTest < ActionDispatch::IntegrationTest
  Routes = ActionDispatch::Routing::RouteSet.new
  Routes.draw do
    ActiveSupport::Deprecation.silence do
      get ':controller(/:action(/:id))'
    end
  end
    
        alias_method :insert_before, :insert
    
          if dest.end_with? '/'
        dest_dir.relative_path_from(base_dir).to_s.tap do |result|
          result << '/' if result != '.'
        end
      else
        dest_dir.parent.relative_path_from(base_dir).join(dest.split('/').last).to_s
      end
    end
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
        def find_remote(username, domain)
      AccountFinder.new(username, domain).account
    end
  end
    
      def updated
    object.updated_at.iso8601
  end
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
        # #gradient > { @mixin horizontal ... }
    # to:
    # @mixin gradient-horizontal
    def flatten_mixins(file, container, prefix)
      log_transform container, prefix
      replace_rules file, Regexp.escape(container) do |mixins_css|
        unindent unwrap_rule_block(mixins_css).gsub(/@mixin\s*([\w-]+)/, '@mixin #{prefix}-\\1')
      end
    end
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Version of your assets, change this if you want to expire all your assets.
  config.assets.version = '1.0'
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end