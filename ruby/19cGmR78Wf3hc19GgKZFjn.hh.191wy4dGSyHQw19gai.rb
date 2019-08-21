
        
          let(:local_caffeine) {
    Cask::CaskLoader.load(cask_path('local-caffeine'))
  }
    
        def perform
      clear_cache
      fetch
      quarantine
      downloaded_path
    end
    
    describe GitDownloadStrategy do
  subject { described_class.new(url, name, version) }
    
            # Initialize a new instance
        #
        # @param [Xcodeproj::Project] user_project see #user_project
        # @param [Array<PBXNativeTarget>] user_targets see #user_targets
        # @param [Array<Specification>] specs see #specs
        # @param [Symbol] platform_name see #platform_name
        # @param [String] platform_deployment_target see #platform_deployment_target
        # @param [String] cocoapods_target_label see #cocoapods_target_label
        #
        def initialize(user_project, user_targets, specs, platform_name, platform_deployment_target, cocoapods_target_label)
          @user_project = user_project
          @user_targets = user_targets
          @specs = specs
          @platform_name = platform_name
          @platform_deployment_target = platform_deployment_target
          @cocoapods_target_label = cocoapods_target_label
        end
    
    module Pod
  class Installer
    class Analyzer
      # Collects all {PodVariant}.
      class PodVariantSet
        # @return [Array<PodVariant>] the different variants within this set.
        #
        attr_reader :variants
    
    # if Gem::Version.new(RUBY_VERSION.dup) >= Gem::Version.new('1.9')
#   if ENV['CI'] || ENV['GENERATE_COVERAGE']
#     require 'simplecov'
#     require 'coveralls'
#
#     if ENV['CI']
#       SimpleCov.formatter = Coveralls::SimpleCov::Formatter
#     elsif ENV['GENERATE_COVERAGE']
#       SimpleCov.formatter = SimpleCov::Formatter::HTMLFormatter
#     end
#     SimpleCov.start do
#       add_filter '/spec_helper/'
#     end
#   end
# end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          def react_and_close(env, body)
        reaction = react(env)
    
      it_behaves_like 'any rack application'
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
      it 'denies post requests with wrong X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => bad_token)
    expect(last_response).not_to be_ok
  end
    
             get '/?:filter?' do
           selected_fields = extract_fields(params['filter'].to_s.strip)
           values = node.all(selected_fields)
    
        def fetch_node_stats(agent, stats)
      @global_stats.merge({
        'http_address' => stats.get_shallow(:http_address).value,
        'ephemeral_id' => agent.ephemeral_id
      })
    end
  end
end; end; end

    
      [
            Setting::String.new('node.name', Socket.gethostname),
    Setting::NullableString.new('path.config', nil, false),
 Setting::WritableDirectory.new('path.data', ::File.join(LogStash::Environment::LOGSTASH_HOME, 'data')),
    Setting::NullableString.new('config.string', nil, false),
           Setting::Modules.new('modules.cli', LogStash::Util::ModulesSettingArray, []),
           Setting::Modules.new('modules', LogStash::Util::ModulesSettingArray, []),
                    Setting.new('modules_list', Array, []),
                    Setting.new('modules_variable_list', Array, []),
           Setting::Modules.new('cloud.id', LogStash::Util::CloudSettingId),
           Setting::Modules.new('cloud.auth',LogStash::Util::CloudSettingAuth),
           Setting::Boolean.new('modules_setup', false),
           Setting::Boolean.new('config.test_and_exit', false),
           Setting::Boolean.new('config.reload.automatic', false),
           Setting::TimeValue.new('config.reload.interval', '3s'), # in seconds
           Setting::Boolean.new('config.support_escapes', false),
            Setting::String.new('config.field_reference.parser', 'STRICT', true, %w(STRICT)),
           Setting::Boolean.new('metric.collect', true),
            Setting::String.new('pipeline.id', 'main'),
           Setting::Boolean.new('pipeline.system', false),
   Setting::PositiveInteger.new('pipeline.workers', LogStash::Config::CpuCoreStrategy.maximum),
   Setting::PositiveInteger.new('pipeline.batch.size', 125),
           Setting::Numeric.new('pipeline.batch.delay', 50), # in milliseconds
           Setting::Boolean.new('pipeline.unsafe_shutdown', false),
           Setting::Boolean.new('pipeline.java_execution', true),
           Setting::Boolean.new('pipeline.reloadable', true),
           Setting::Boolean.new('pipeline.plugin_classloaders', false),
                    Setting.new('path.plugins', Array, []),
    Setting::NullableString.new('interactive', nil, false),
           Setting::Boolean.new('config.debug', false),
            Setting::String.new('log.level', 'info', true, ['fatal', 'error', 'warn', 'debug', 'info', 'trace']),
           Setting::Boolean.new('version', false),
           Setting::Boolean.new('help', false),
            Setting::String.new('log.format', 'plain', true, ['json', 'plain']),
            Setting::String.new('http.host', '127.0.0.1'),
            Setting::PortRange.new('http.port', 9600..9700),
            Setting::String.new('http.environment', 'production'),
            Setting::String.new('queue.type', 'memory', true, ['persisted', 'memory']),
            Setting::Boolean.new('queue.drain', false),
            Setting::Bytes.new('queue.page_capacity', '64mb'),
            Setting::Bytes.new('queue.max_bytes', '1024mb'),
            Setting::Numeric.new('queue.max_events', 0), # 0 is unlimited
            Setting::Numeric.new('queue.checkpoint.acks', 1024), # 0 is unlimited
            Setting::Numeric.new('queue.checkpoint.writes', 1024), # 0 is unlimited
            Setting::Numeric.new('queue.checkpoint.interval', 1000), # 0 is no time-based checkpointing
            Setting::Boolean.new('queue.checkpoint.retry', false),
            Setting::Boolean.new('dead_letter_queue.enable', false),
            Setting::Bytes.new('dead_letter_queue.max_bytes', '1024mb'),
            Setting::TimeValue.new('slowlog.threshold.warn', '-1'),
            Setting::TimeValue.new('slowlog.threshold.info', '-1'),
            Setting::TimeValue.new('slowlog.threshold.debug', '-1'),
            Setting::TimeValue.new('slowlog.threshold.trace', '-1'),
            Setting::String.new('keystore.classname', 'org.logstash.secret.store.backend.JavaKeyStore'),
            Setting::String.new('keystore.file', ::File.join(::File.join(LogStash::Environment::LOGSTASH_HOME, 'config'), 'logstash.keystore'), false) # will be populated on
  # post_process
  ].each {|setting| SETTINGS.register(setting) }
    
          stack_to_expr(stack)
    end
    
    require_relative '../lib/bootstrap/environment'
    
        it 'returns nil if an except is provided' do
      valid_article = create(:article, tags: 'explainlikeimfive')
      expect(described_class.new(valid_article, 'explainlikeimfive').tag).to eq(nil)
    end
    
          it 'does not render below article html variant when user logged in' do
        html_variant = create(:html_variant, published: true, approved: true, group: 'article_show_below_article_cta')
        sign_in user
        get article.path + '?variant_version=0'
        expect(response.body).not_to include html_variant.html
      end
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
        # returns the formatted full price for the variant, if at least one variant price differs from product price
    def variant_full_price(variant)
      product = variant.product
      unless product.variants.active(current_currency).all? { |v| v.price == product.price }
        Spree::Money.new(variant.price, currency: current_currency).to_html
      end
    end
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
            def show
          respond_with(@payment)
        end
    
            def stock_item_params
          params.require(:stock_item).permit(permitted_stock_item_attributes)
        end
      end
    end
  end
end

    
            def taxonomy
          @taxonomy ||= Taxonomy.accessible_by(current_ability, :show).find(params[:id])
        end
    
              @users = @users.result.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@users)
        end
    
            def variant_includes
          [{ option_values: :option_type }, :product, :default_price, :images, { stock_items: :stock_location }]
        end
      end
    end
  end
end

    
          original.attributes[:snap_hooks] = {
        'hook1' => nil,
        'hook2' => {
          'plugs' => ['test-plug']
        },
      }
    end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
        files = []
    Find.find('.') do |path|
      stat = File.lstat(path)
      next unless stat.symlink? or stat.file?
      files << path
    end
    ::Dir.chdir(cwd)
    
      def output(output_path)
    create_scripts
    
    
    # Convert the 'package directory' built above to a real solaris package.
    safesystem('pkgtrans', '-s', build_path, output_path, name)
    safesystem('cp', '#{build_path}/#{output_path}', output_path)
  end # def output