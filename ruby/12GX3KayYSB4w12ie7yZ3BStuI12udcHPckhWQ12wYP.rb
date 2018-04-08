
        
                def redis_connection_for_broadcasts
          @redis_connection_for_broadcasts || @server.mutex.synchronize do
            @redis_connection_for_broadcasts ||= redis_connection
          end
        end
    
      test 'raw_params returns a tuple of two key value pair strings' do
    auth = sample_request('rcHu+HzSFw89Ypyhn/896A=').authorization.to_s
    actual = ActionController::HttpAuthentication::Token.raw_params(auth)
    expected = ['token=\'rcHu+HzSFw89Ypyhn/896A=\'', 'nonce=\'def\'']
    assert_equal(expected, actual)
  end
    
        test 'connect a request to controller instance without dispatch' do
      env = {}
      controller = BareController.new
      controller.set_request! ActionDispatch::Request.new(env)
      assert controller.request
    end
  end
    
    ActionMailer::LogSubscriber.attach_to :action_mailer

    
          module ClassMethods
        def tests(mailer)
          case mailer
          when String, Symbol
            self._mailer_class = mailer.to_s.camelize.constantize
          when Module
            self._mailer_class = mailer
          else
            raise NonInferrableMailerError.new(mailer)
          end
        end
    
    # These are the normal settings that will be set up by Railties
# TODO: Have these tests support other combinations of these values
silence_warnings do
  Encoding.default_internal = Encoding::UTF_8
  Encoding.default_external = Encoding::UTF_8
end
    
    class CustomDeliveryMethodsTest < ActiveSupport::TestCase
  setup do
    @old_delivery_method = ActionMailer::Base.delivery_method
    ActionMailer::Base.add_delivery_method :custom, MyCustomDelivery
  end
    
    class I18nTestMailer < ActionMailer::Base
  configure do |c|
    c.assets_dir = ''
  end
    
      def detected_language
    if content_language_map?
      @object['contentMap'].keys.first
    elsif name_language_map?
      @object['nameMap'].keys.first
    elsif supported_object_type?
      LanguageDetector.instance.detect(text_from_content, @account)
    end
  end
    
      def preview_url
    if object.needs_redownload?
      media_proxy_url(object.id, :small)
    else
      full_asset_url(object.file.url(:small))
    end
  end
    
    class TagsController < ApplicationController
  before_action :set_body_classes
  before_action :set_instance_presenter
    
      describe 'GET #show' do
    let!(:tag)     { Fabricate(:tag, name: 'test') }
    let!(:local)   { Fabricate(:status, tags: [tag], text: 'local #test') }
    let!(:remote)  { Fabricate(:status, tags: [tag], text: 'remote #test', account: Fabricate(:account, domain: 'remote')) }
    let!(:late)    { Fabricate(:status, tags: [tag], text: 'late #test') }
    
        def register_sprockets
      Sprockets.append_path(stylesheets_path)
      Sprockets.append_path(fonts_path)
      Sprockets.append_path(javascripts_path)
    end
  end
end
    
        # apply general less to scss conversion
    def convert_to_scss(file)
      # get local mixin names before converting the definitions
      mixins = shared_mixins + read_mixins(file)
      file   = replace_vars(file)
      file   = replace_mixin_definitions(file)
      file   = replace_mixins(file, mixins)
      file   = extract_mixins_from_selectors(file, CLASSES_TO_MIXINS.inject({}) { |h, cl| h.update('.#{cl}' => cl) })
      file   = replace_spin(file)
      file   = replace_fadein(file)
      file   = replace_image_urls(file)
      file   = replace_escaping(file)
      file   = convert_less_ampersand(file)
      file   = deinterpolate_vararg_mixins(file)
      file   = replace_calculation_semantics(file)
      file   = replace_file_imports(file)
      file   = wrap_at_groups_with_at_root(file)
      file
    end
    
        def log_status(status)
      puts bold status
    end
    
      # Generate digests for assets URLs.
  config.assets.digest = true
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end