
        
            assert_equal %(dont <\\/close> tags), j(%(dont </close> tags))
  end
    
    module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
          # Calls this block after #reset is called on the instance. Used for resetting external collaborators, like Time.zone.
      def resets(&block)
        set_callback :reset, :after, &block
      end
    
      def setup
    super
    @request.action = 'index'
  end
    
      test 'token_and_options returns correct token with nounce option' do
    token = 'rcHu+HzSFw89Ypyhn/896A='
    nonce_hash = { nonce: '123abc' }
    actual = ActionController::HttpAuthentication::Token.token_and_options(sample_request(token, nonce_hash))
    expected_token = token
    expected_nonce = { 'nonce' => nonce_hash[:nonce] }
    assert_equal(expected_token, actual.first)
    assert_equal(expected_nonce, actual.last)
  end
    
        class DeliveryJob < ActionMailer::DeliveryJob # :nodoc:
      def perform(mailer, mail_method, delivery_method, params, *args)
        mailer.constantize.with(params).public_send(mail_method, *args).send(delivery_method)
      end
    end
  end
end

    
        assert_equal(1, @logger.logged(:info).size)
    assert_match(/Sent mail to system@test\.lindsaar\.net/, @logger.logged(:info).first)
    
          html_filters.push 'bootstrap/entries_v3', 'bootstrap/clean_html_v3'
    
        version '5' do
      self.release = '5.0.7'
      self.base_url = 'http://sinonjs.org/releases/v#{release}/'
    end
    
        options[:attribution] = <<-HTML
      &copy; 2018 The TensorFlow Authors. All rights reserved.<br>
      Licensed under the Creative Commons Attribution License 3.0.<br>
      Code samples licensed under the Apache 2.0 License.
    HTML
    
    Given an Application (app) bundle directory on disk, find all
login items associated with that app, which you can use in a
Cask uninstall stanza, eg
    
    def report_apps
  running = Set.new
  @app_names.zip(@bundle_ids, @unix_ids).each do |app_name, bundle_id, _unix_id|
    next if excluded_bundle_id bundle_id
    next if excluded_app_name app_name
    bundle_id.gsub!(%r{^(missing value)$}, '<\1>')
    running.add '#{bundle_id}\t#{app_name}'
  end
    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
      it 'registers an offense' do
    inspect_source(source)
    
              end
        RUBY
        expect(cop.messages).to eq([])
      end
    end