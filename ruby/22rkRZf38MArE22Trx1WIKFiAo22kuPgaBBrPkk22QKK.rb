
        
            def test_migrate_revert_by_part
      InvertibleMigration.new.migrate :up
      received = []
      migration = InvertibleByPartsMigration.new
      migration.test = ->(dir) {
        assert migration.connection.table_exists?('horses')
        assert migration.connection.table_exists?('new_horses')
        received << dir
      }
      migration.migrate :up
      assert_equal [:both, :up], received
      assert_not migration.connection.table_exists?('horses')
      assert migration.connection.table_exists?('new_horses')
      migration.migrate :down
      assert_equal [:both, :up, :both, :down], received
      assert migration.connection.table_exists?('horses')
      assert_not migration.connection.table_exists?('new_horses')
    end
    
        initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
          def self.[](type)
        type_klass[type]
      end
    
        should 'should log kramdown warnings' do
      allow_any_instance_of(Kramdown::Document).to receive(:warnings).and_return(['foo'])
      expect(Jekyll.logger).to receive(:warn).with('Kramdown warning:', 'foo')
      @markdown.convert('Something')
    end
    
    $LOAD_PATH.unshift File.expand_path('lib', __dir__)
require 'jekyll/version'
    
    def pr(url)
  if url.end_with?(FORWARD_SLASH)
    url
  else
    url_dir = File.dirname(url)
    url_dir.end_with?(FORWARD_SLASH) ? url_dir : '#{url_dir}/'
  end
end
    
    require 'benchmark/ips'
require 'pathutil'
    
            @io.puts
        print_exception(exception, status, @indent)
        @io.flush
      end
    
            log_email_process_failure(@mail, e)
        incoming_email = @receiver.try(:incoming_email)
        rejection_message = handle_failure(@mail, e)
        if rejection_message.present?
          set_incoming_email_rejection_message(incoming_email, rejection_message.body.to_s)
        end
      end
    end
    
        it 'should import branch from ssh url' do
      Discourse::Utils.expects(:execute_command).with({
        'GIT_SSH_COMMAND' => 'ssh -i #{@ssh_folder}/id_rsa -o StrictHostKeyChecking=no'
      }, 'git', 'clone', '--single-branch', '-b', branch, ssh_url, @temp_folder)
    
      private
    
    require 'rails_helper'
require 'i18n/backend/fallback_locale_list'
    
      def self.views_thresholds
    results = DB.query(<<~SQL)
      SELECT ranked.bucket * 5 as percentile, MIN(ranked.views) as views
      FROM (
        SELECT NTILE(20) OVER (ORDER BY t.views DESC) AS bucket, t.views
        FROM (
          SELECT views
            FROM topics
           WHERE deleted_at IS NULL
             AND archetype <> 'private_message'
             AND visible = TRUE
        ) t
      ) ranked
      WHERE bucket <= 9
      GROUP BY bucket
    SQL
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
    RSpec.describe FlareTag do
  let(:user) { create(:user) }
  let(:article) { create(:article, user_id: user.id) }
    
          it 'flashes an error message' do
        post '/users/api_secrets', params: { api_secret: invalid_params }
        expect(flash[:error]).to be_truthy
        expect(flash[:notice]).to be_nil
      end
    end
  end
end

    
      describe 'POST blocks' do
    it 'creates block from input data' do
      post '/blocks', params: {
        block: {
          input_css: '.blue { color: blue;}',
          input_html: 'yo',
          input_javascript: 'alert('hey')'
        }
      }
      expect(Block.all.size).to eq(1)
    end
  end
    
      it 'renders a podcast index if there is a podcast with the slug successfully' do
    expect(get: '/#{podcast.slug}').to route_to(
      controller: 'stories',
      action: 'index',
      username: podcast.slug,
    )
  end
    
        it 'embeds the published timestamp' do
      visit '/#{user.username}/#{article.slug}'
      selector = 'article time[datetime='#{timestamp}']'
      expect(page).to have_selector(selector)
    end
  end
end

    
        scope :store_credits, -> { where(source_type: Spree::StoreCredit.to_s) }
    scope :not_store_credits, -> { where(arel_table[:source_type].not_eq(Spree::StoreCredit.to_s).or(arel_table[:source_type].eq(nil))) }
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
      orig_stdout = $stdout
  orig_stderr = $stderr