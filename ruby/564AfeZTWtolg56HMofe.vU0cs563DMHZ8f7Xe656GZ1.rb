
        
                  def hidden_field_for_checkbox(options)
            @unchecked_value ? tag('input', options.slice('name', 'disabled', 'form').merge!('type' => 'hidden', 'value' => @unchecked_value)) : ''.html_safe
          end
      end
    end
  end
end

    
        initializer 'action_view.collection_caching', after: 'action_controller.set_configs' do |app|
      PartialRenderer.collection_cache = app.config.action_controller.cache_store
    end
    
          def self.cache_key_for(raw_key)
        '#{Redis::Cache::CACHE_NAMESPACE}:#{raw_key}'
      end
    end
  end
end

    
          # Returns the details of a GitHub user.
      #
      # username - The username of the user.
      def user(username)
        with_rate_limit { octokit.user(username) }
      end
    
            def representation_class
          Representation::DiffNote
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
            def sidekiq_worker_class
          ImportLfsObjectWorker
        end
    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
      describe 'down' do
    let :valid_options do
      super().merge('extract' => new_extract,
                    'template' => new_template)
    end
    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
      before_action :set_account
  before_action :set_statuses
    
          redirect_to admin_account_path(@account.id), notice: I18n.t('admin.accounts.change_email.changed_msg')
    end
    
    module Admin
  class CustomEmojisController < BaseController
    before_action :set_custom_emoji, except: [:index, :new, :create]
    before_action :set_filter_params
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end