
        
            # Ignore this if one of the required options is missing
    return if not rhost
    return if not lport
    
        return buf
  end
    
        return str
  end
    
    end
end
end
end

    
              sent
        end
    
                encoded
          end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos AuthorizationData data
        # definition.
        class AuthorizationData < Element
          # @!attribute elements
          #   @return [Hash{Symbol => <Integer, String>}] The type of the authorization data
          #   @option [Integer] :type
          #   @option [String] :data
          attr_accessor :elements
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end

    
    describe LogStash::Config::PipelineConfig do
  let(:source) { LogStash::Config::Source::Local }
  let(:pipeline_id) { :main }
  let(:ordered_config_parts) do
    [
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/1', 0, 0, 'input { generator1 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/2', 0, 0,  'input { generator2 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/3', 0, 0, 'input { generator3 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/4', 0, 0, 'input { generator4 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/5', 0, 0, 'input { generator5 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/6', 0, 0, 'input { generator6 }'),
      org.logstash.common.SourceWithMetadata.new('string', 'config_string', 0, 0, 'input { generator1 }'),
    ]
  end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
      def test_locale_determination
    obj = Helpers.new
    assert_equal 'en', obj.locale
    
        assert_equal obj.attribute, Psych.load(Psych.dump(obj)).attribute
  end
end

    
      describe 'default_worker_options' do
    it 'stringifies keys' do
      @old_options = Sidekiq.default_worker_options
      begin
        Sidekiq.default_worker_options = { queue: 'cat'}
        assert_equal 'cat', Sidekiq.default_worker_options['queue']
      ensure
        Sidekiq.default_worker_options = @old_options
      end
    end
  end
    
      describe 'delay' do
    require 'action_mailer'
    class InlineFooMailer < ActionMailer::Base
      def bar(str)
        raise InlineError
      end
    end
    
    @@ index
  <h1>Sinatra + Sidekiq Example</h1>
  <h2>Failed: <%= @failed %></h2>
  <h2>Processed: <%= @processed %></h2>