
        
            build_phases = [:reset, :read, :generate, :render, :cleanup, :write]
    safe_mode    = false
    
    FORWARD_SLASH = '/'.freeze
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
        def get_path_for_optimized_image(optimized_image)
      upload = optimized_image.upload
      version = optimized_image.version || 1
      extension = '_#{version}_#{optimized_image.width}x#{optimized_image.height}#{optimized_image.extension}'
      get_path_for('optimized'.freeze, upload.id, upload.sha1, extension)
    end
    
          expect(file.class).to eq(File)
    end
  end
end

    
        it 'does block if rate limiter is enabled' do
      global_setting :max_reqs_per_ip_per_10_seconds, 1
      global_setting :max_reqs_per_ip_mode, 'block'
    
          expect(I18n.t('i18n.plural.keys')).to eq([:one, :few, :other])
      expect(I18n.t('items', count: 1)).to eq('one item')
      expect(I18n.t('items', count: 3)).to eq('some items')
      expect(I18n.t('items', count: 20)).to eq('20 items')
    end
  end
    
            # pngquant will lose some colors causing some extra size reduction
        expect(thumbnail_size).to be < 7500
      end
    
        describe 'with nil raw contents' do
      it 'doesn't change version' do
        expect {
          expect(subject.revise!(post.user, raw: nil)).to eq(false)
          post.reload
        }.not_to change(post, :version)
      end
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
            css('pre[language]').each do |node|
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('language')
          node.remove_attribute('format')
        end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
          def mailer_reply_to(mapping)
        mailer_sender(mapping, :reply_to)
      end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
        it 'returns text/html by default' do
      request.env['HTTP_ACCEPT'] = 'text/html,*/*'
      expect(post(:create, params: @params).headers['Content-Type']).to match 'text/html.*'
    end
  end
    
    puts 'Bundler configured! Please run 'bin/bundle install' now.'

    
          rescue_from OpenIDConnect::HttpError do |e|
        http_error_page_as_json(e)
      end
    
          def fetch_public_key(o_auth_app, jwt)
        public_key = fetch_public_key_from_json(o_auth_app.jwks, jwt)
        if public_key.empty? && o_auth_app.jwks_uri
          response = Faraday.get(o_auth_app.jwks_uri)
          public_key = fetch_public_key_from_json(response.body, jwt)
        end
        raise Rack::OAuth2::Server::Authorize::BadRequest(:unauthorized_client) if public_key.empty?
        public_key
      end
    
      def destroy
    @aspect = current_user.aspects.where(id: params[:id]).first
    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'
    
            if report.issues.count > 3
          UI.puts 'and #{report.total_results - 3} more at:'
          UI.puts report.url
        end
      end
    
    [Semantic version](https://semver.org) tags (instead of plain commit hashes/revisions) allow for [resolution of cross-dependencies](https://github.com/CocoaPods/Specs/wiki/Cross-dependencies-resolution-example).
    
        it 'only prints a count when invoked with --count-only' do
      config.repos_dir = fixture('spec-repos')
      output = run_command('repo', 'list', '--count-only')
      output.should.include? 'repo'
      output.should.not.include? '- Type:'
    end
    
              # Returns a Pathname of the nearest parent from which all the given paths descend.
          # Converts each Pathname to a list of path components and finds the longest common prefix
          #
          # @param  [Array<Pathname>] paths
          #         The paths to files or directories on disk. Must be absolute paths
          #
          # @return [Pathname] Pathname of the nearest parent shared by paths, or nil if none exists
          #
          def common_path(paths)
            return nil if paths.empty?
            strs = paths.map do |path|
              unless path.absolute?
                raise ArgumentError, 'Paths must be absolute #{path}'
              end
              path.dirname.to_s
            end
            min, max = strs.minmax
            min = min.split('/')
            max = max.split('/')
            idx = min.size.times { |i| break i if min[i] != max[i] }
            result = Pathname.new(min[0...idx].join('/'))
            # Don't consider '/' a common path
            return result unless result.to_s == '' || result.to_s == '/'
          end
    
                it 'links the public headers meant for the user for a vendored framework' do
              pod_target_one = fixture_pod_target('banana-lib/BananaLib.podspec', true)
              pod_target_two = fixture_pod_target('monkey/monkey.podspec', true)
              project = Project.new(config.sandbox.project_path)
              project.add_pod_group('BananaLib', fixture('banana-lib'))
              project.add_pod_group('monkey', fixture('monkey'))
              installer = FileReferencesInstaller.new(config.sandbox, [pod_target_one, pod_target_two], project)
              installer.install!
              headers_root = config.sandbox.public_headers.root
              banana_headers = [headers_root + 'BananaLib/Banana.h', headers_root + 'BananaLib/MoreBanana.h']
              banana_headers.each { |banana_header| banana_header.should.not.exist }
              monkey_header = headers_root + 'monkey/monkey.h'
              monkey_header.should.exist # since it lives outside of the vendored framework
            end
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end
    
        def initialize(global_stats, snapshot)
      @global_stats = global_stats
      @snapshot = snapshot
      @metric_store = @snapshot.metric_store
    end
    
          case op
      when :and
        return jdsl.eAnd(source_meta, left, right);
      when :nand
        return jdsl.eNand(source_meta, left, right);
      when :or
        return jdsl.eOr(source_meta, left, right);
      when :xor
        return jdsl.eXor(source_meta, left, right);
      else
        raise 'Unknown op #{jop}'
      end
    end
    
      it 'returns the pipeline id' do
    expect(subject.pipeline_id).to eq(pipeline_id)
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
    
      def self.buff!(article_id, text, buffer_profile_id_code, social_service_name = 'twitter', tag_id = nil)
    buffer_response = send_to_buffer(text, buffer_profile_id_code)
    create(
      article_id: article_id,
      tag_id: tag_id,
      body_text: text,
      buffer_profile_id_code: buffer_profile_id_code,
      social_service_name: social_service_name,
      buffer_response: buffer_response,
      status: 'sent_direct',
    )
  end
    
      def update
    @page = Page.find(params[:id])
    @page.update!(page_params)
    redirect_to '/internal/pages'
  end
    
        def update_order
      order.updater.update_payment_total if completed? || void?
    
          def customer
        order.email
      end
    
        def method_missing(method, *args)
      name = method.to_s.delete('=')
      if has_preference? name
        if method.to_s =~ /=$/
          set_preference(name, args.first)
        else
          get_preference name
        end
      else
        super
      end
    end
  end
end

    
        def requires_manual_intervention?
      validators.any?(&:requires_manual_intervention?)
    end
    
                shipping_method = Spree::ShippingMethod.find_by(name: s[:shipping_method]) ||
              Spree::ShippingMethod.find_by!(admin_name: s[:shipping_method])
            rate = shipment.shipping_rates.create!(shipping_method: shipping_method, cost: s[:cost])
    
              before do
            Spree::ShippingMethod.all.each do |sm|
              sm.tax_category_id = tax_rate.tax_category_id
              sm.save
            end
            package.shipping_methods.map(&:reload)
          end
    
            private
    
            def product_property
          if @product
            @product_property ||= @product.product_properties.find_by(id: params[:id])
            @product_property ||= @product.product_properties.includes(:property).where(spree_properties: { name: params[:id] }).first
            raise ActiveRecord::RecordNotFound unless @product_property
    
            def update
          if @property
            authorize! :update, @property
            @property.update(property_params)
            respond_with(@property, status: 200, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
              unless @quantity > 0
            unprocessable_entity('#{Spree.t(:shipment_transfer_errors_occured, scope: 'api')} \n #{Spree.t(:negative_quantity, scope: 'api')}')
            return
          end
    
    Sidekiq.logger.level = Logger::ERROR
    
      it 'correctly replaces middleware when using middleware with options in the initializer' do
    chain = Sidekiq::Middleware::Chain.new
    chain.add NonYieldingMiddleware
    chain.add NonYieldingMiddleware, {:foo => 5}
    assert_equal 1, chain.count
  end