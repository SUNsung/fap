
        
              def test_invert_remove_foreign_key_with_primary_key_and_to_table_in_options
        enable = @recorder.inverse_of :remove_foreign_key, [:dogs, to_table: :people, primary_key: 'uuid']
        assert_equal [:add_foreign_key, [:dogs, :people, primary_key: 'uuid']], enable
      end
    
            def ==(type)
          @symbol == type.to_sym unless type.blank?
        end
      end
    
          def destroy
        authorization = Api::OpenidConnect::Authorization.find_by(id: params[:id])
        if authorization
          authorization.destroy
        else
          flash[:error] = I18n.t('api.openid_connect.authorizations.destroy.fail', id: params[:id])
        end
        redirect_to api_openid_connect_user_applications_url
      end
    
      respond_to :html,
             :js,
             :json
    
      respond_to :html, :mobile, :json
    
        opts = params.require(:conversation).permit(:subject)
    opts[:participant_ids] = person_ids
    opts[:message] = { text: params[:conversation][:text] }
    @conversation = current_user.build_conversation(opts)
    
      def create
    emails = inviter_params[:emails].split(',').map(&:strip).uniq
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
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

    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
    require 'minitest/autorun'
    
        it 'wraps the inlined worker with middleware' do
      Sidekiq::Testing.server_middleware do |chain|
        chain.add AttributeMiddleware
      end
    
      describe 'delay' do
    require 'action_mailer'
    class InlineFooMailer < ActionMailer::Base
      def bar(str)
        raise InlineError
      end
    end
    
    require_relative '../lib/sidekiq/cli'
require_relative '../lib/sidekiq/launcher'