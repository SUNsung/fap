
        
            should 'filter entries' do
      ent1 = %w(foo.markdown bar.markdown baz.markdown #baz.markdown#
                .baz.markdow foo.markdown~ .htaccess _posts _pages ~$benbalter.docx)
    
            @current_document.related_posts
      end
      attr_writer :current_document
    
      url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
          def mailer_sender(mapping, sender = :from)
        default_sender = default_params[sender]
        if default_sender.present?
          default_sender.respond_to?(:to_proc) ? instance_eval(&default_sender) : default_sender
        elsif Devise.mailer_sender.is_a?(Proc)
          Devise.mailer_sender.call(mapping.name)
        else
          Devise.mailer_sender
        end
      end
    
          @path = (options[:path] || name).to_s
      @path_prefix = options[:path_prefix]
    
        def self.check_fields!(klass)
      failed_attributes = []
      instance = klass.new
    
    require 'devise/strategies/rememberable'
require 'devise/hooks/rememberable'
require 'devise/hooks/forgetable'
    
          rescue_from Api::OpenidConnect::Error::InvalidRedirectUri do |e|
        validation_fail_redirect_uri(e)
      end
    
        redirect_back fallback_location: root_path
  end
    
    class LikesController < ApplicationController
  include ApplicationHelper
  before_action :authenticate_user!, except: :index
    
      respond_to :html, :mobile
  respond_to :json, :only => :show
    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
        # If true, causes the confirmation step to happen during the checkout process
    def confirmation_required?
      Spree::Config[:always_include_confirm_step] ||
        payments.valid.map(&:payment_method).compact.any?(&:payment_profiles_supported?) ||
        # Little hacky fix for #4117
        # If this wasn't here, order would transition to address state on confirm failure
        # because there would be no valid payments any more.
        confirm?
    end
    
          def tax
        order.additional_tax_total * exchange_multiplier
      end
    
          failed_orders << order unless order.completed? && order.valid?
    rescue StandardError
      failed_orders << order
    end
    failure_message = failed_orders.map { |o| '#{o.number} - #{o.errors.full_messages}' }.join(', ')
    raise UnableToChargeForUnreturnedItems, failure_message if failed_orders.present?
  end
end
    
              before do
            Spree::ShippingMethod.all.each do |sm|
              sm.tax_category_id = tax_rate.tax_category_id
              sm.save
            end
            package.shipping_methods.map(&:reload)
          end
    
              can_event = 'can_#{@event}?'
    
            private
    
        it 'allows Resque helpers to point to different Redi' do
      conn = MiniTest::Mock.new
      conn.expect(:multi, []) { |*args, &block| block.call }
      conn.expect(:zadd, 1, [String, Array])
      DWorker.sidekiq_options('pool' => ConnectionPool.new(size: 1) { conn })
      Sidekiq::Client.enqueue_in(10, DWorker, 3)
      conn.verify
    end
  end
    
        it 'can be memoized' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      set = SetWorker.set(queue: :bar, foo: 'qaaz')
      set.perform_async(1)
      set.perform_async(1)
      set.perform_async(1)
      set.perform_async(1)
      assert_equal 4, q.size
      assert_equal 4, q.map{|j| j['jid'] }.uniq.size
      set.perform_in(10, 1)
    end
    
        describe 'enqueued' do
      it 'handles latency for good jobs' do
        Sidekiq.redis do |conn|
          conn.rpush 'queue:default', '{\'enqueued_at\': #{Time.now.to_f}}'
          conn.sadd 'queues', 'default'
        end
        s = Sidekiq::Stats.new
        assert s.default_queue_latency > 0
        q = Sidekiq::Queue.new
        assert q.latency > 0
      end
    
        assert_equal dead_set.find_job('123123').value, serialized_job
  end
    
      class NonYieldingMiddleware
    def call(*args)
    end
  end
    
    @@ layout
<html>
  <head>
    <title>Sinatra + Sidekiq</title>
    <body>
      <%= yield %>
    </body>
</html>
    
    desc 'Initial setup for Octopress: copies the default theme into the path of Jekyll's generator. Rake install defaults to rake install[classic] to install a different theme run rake install[some_theme_name]'
task :install, :theme do |t, args|
  if File.directory?(source_dir) || File.directory?('sass')
    abort('rake aborted!') if ask('A theme is already installed, proceeding will overwrite existing files. Are you sure?', ['y', 'n']) == 'n'
  end
  # copy theme into working Jekyll directories
  theme = args.theme || 'classic'
  puts '## Copying '+theme+' theme into ./#{source_dir} and ./sass'
  mkdir_p source_dir
  cp_r '#{themes_dir}/#{theme}/source/.', source_dir
  mkdir_p 'sass'
  cp_r '#{themes_dir}/#{theme}/sass/.', 'sass'
  mkdir_p '#{source_dir}/#{posts_dir}'
  mkdir_p public_dir
end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
          super
    end
    
    Gem::Specification.new do |s|
  s.name          = 'tmuxinator'
  s.version       = Tmuxinator::VERSION
  s.authors       = ['Allen Bargi', 'Christopher Chow']
  s.email         = ['allen.bargi@gmail.com', 'chris@chowie.net']
  s.description   = %q{Create and manage complex tmux sessions easily.}
  s.summary       = %q{Create and manage complex tmux sessions easily.}
  s.homepage      = 'https://github.com/tmuxinator/tmuxinator'
  s.license       = 'MIT'
    
        def _send_target(e)
      _send_keys(tmux_window_and_pane_target, e)
    end
    
        desc 'start [PROJECT] [ARGS]', COMMANDS[:start]
    map 's' => :start
    method_option :attach, type: :boolean,
                           aliases: '-a',
                           desc: 'Attach to tmux session after creation.'
    method_option :name, aliases: '-n',
                         desc: 'Give the session a different name'
    method_option 'project-config', aliases: '-p',
                                    desc: 'Path to project config file'
    method_option 'suppress-tmux-version-warning',
                  desc: 'Don't show a warning for unsupported tmux versions'
    
        context 'tmux is not installed' do
      before do
        allow(Kernel).to receive(:system) { false }
      end