
        
                @request.env.delete('PATH_INFO')
        @params = ActionController::Parameters.new
      end
    end
    
        get :redirect_back_with_status
    
            @disable_request_forgery_protection = false
        @allow_same_origin_as_host = true
      end
    
            def test_url_sub_key_for_sqlite3
          spec = resolve :production, 'production' => { 'url' => 'sqlite3:foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'sqlite3',
            'database' => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
      def test_helper_proxy_in_instance
    methods = AllHelpersController.new.helpers.methods
    
        test 'head :switching_protocols (101) does not return any content' do
      content = body(HeadController.action(:switching_protocols).call(Rack::MockRequest.env_for('/')))
      assert_empty content
    end
    
        def show
      self.response_body = 'show'
    end
  end
    
      class TestCase < ActiveSupport::TestCase
    module ClearTestDeliveries
      extend ActiveSupport::Concern
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
      def save_and_refresh_staff_groups!
    transaction do
      self.save!
      Group.refresh_automatic_groups!(:admins, :moderators, :staff)
    end
  end
    
              results
        end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
            opts = OptionParser.new do |o|
          o.banner = 'Usage: vagrant cap [options] TYPE NAME [args]'
          o.separator ''
          o.separator 'This is an advanced command. If you don't know what this'
          o.separator 'does and you aren't explicitly trying to use it, you probably'
          o.separator 'don't want to use this.'
          o.separator ''
          o.separator 'This command checks or executes arbitrary capabilities that'
          o.separator 'Vagrant has for hosts, guests, and providers.'
          o.separator ''
          o.separator 'Options:'
          o.separator ''
    
    
===============================================
 Error for category_generator.rb plugin
-----------------------------------------------
 No 'category_index.html' in source/_layouts/
 Perhaps you haven't installed a theme yet.
===============================================
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
    require './plugins/pygments_code'
require './plugins/raw'
require 'pathname'
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
            def override_method object, method, &replacement
          (class << object; self; end).class_eval do
            define_method(method, &replacement)
          end
        end
    
          def has_attached_file(*attachment_names)
        ActiveSupport::Deprecation.warn 'Method `t.has_attached_file` in the migration has been deprecated and will be replaced by `t.attachment`.'
        attachment(*attachment_names)
      end
    end
    
                if options.has_key?(validator_kind)
              validator_options = options.delete(validator_kind)
              validator_options = {} if validator_options == true
              conditional_options = options.slice(:if, :unless)
              Array.wrap(validator_options).each do |local_options|
                method_name = Paperclip::Validators.const_get(constant.to_s).helper_method_name
                send(method_name, attributes, local_options.merge(conditional_options))
              end
            end
          end
        end
      end