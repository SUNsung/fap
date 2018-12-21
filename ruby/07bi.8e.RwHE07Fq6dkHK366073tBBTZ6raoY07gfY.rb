
        
          it 'correctly sets notification level' do
    moderator = Fabricate(:moderator)
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
        web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data,
      user_id: active_session.user_id,
      access_token_id: active_session.access_token_id
    )
    
    require 'builder'
require 'feedbag'
require 'json'
require 'nokogiri'
    
    Sidekiq.redis {|c| c.flushdb}
def handle_signal(launcher, sig)
  Sidekiq.logger.debug 'Got #{sig} signal'
  case sig
  when 'INT'
    # Handle Ctrl-C in JRuby like MRI
    # http://jira.codehaus.org/browse/JRUBY-4637
    raise Interrupt
  when 'TERM'
    # Heroku sends TERM and then waits 10 seconds for process to exit.
    raise Interrupt
  when 'TSTP'
    Sidekiq.logger.info 'Received TSTP, no longer accepting new work'
    launcher.quiet
  when 'TTIN'
    Thread.list.each do |thread|
      Sidekiq.logger.warn 'Thread TID-#{(thread.object_id ^ ::Process.pid).to_s(36)} #{thread['label']}'
      if thread.backtrace
        Sidekiq.logger.warn thread.backtrace.join('\n')
      else
        Sidekiq.logger.warn '<no backtrace available>'
      end
    end
  end
end
    
    post '/msg' do
  SinatraWorker.perform_async params[:msg]
  redirect to('/')
end
    
          middleware.invoke(worker_class, item, queue, @redis_pool) do
        item
      end
    end
    
        UnitOfWork = Struct.new(:queue, :job) do
      def acknowledge
        # nothing to do
      end
    
          # Provide a call() method that returns the formatted message.
      def call(severity, time, program_name, message)
        '#{time.utc.iso8601(3)} #{::Process.pid} TID-#{Sidekiq::Logging.tid}#{context} #{severity}: #{message}\n'
      end
    
          def remove(klass)
        entries.delete_if { |entry| entry.klass == klass }
      end