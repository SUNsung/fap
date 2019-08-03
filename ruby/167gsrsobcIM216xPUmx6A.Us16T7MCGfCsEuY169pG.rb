
        
            it 'should return the right path' do
      optimized = Fabricate.build(:optimized_image, upload: upload, version: 1)
      expect(FileStore::BaseStore.new.get_path_for_optimized_image(optimized)).to eq(optimized_path)
    end
    
            # strip out users in groups you already belong to
        target_users = target_users
          .joins('LEFT JOIN group_users gu ON gu.user_id = topic_allowed_users.user_id AND gu.group_id IN (#{sanitize_sql_array(my_group_ids)})')
          .where('gu.group_id IS NULL')
      end
    
        def free_bytes
      nil
    end
  end
end

    
          before do
        SiteSetting.png_to_jpg_quality = 1
      end
    
          app = find_app(apple_id: config[:apple_id], app_identifier: config[:app_identifier])
    
          def self.get(app_id: nil, includes: nil)
        return Spaceship::ConnectAPI.get_app(app_id: app_id, includes: includes).first
      end
    
          def self.type
        return 'betaTesters'
      end
    
              super(base_dir)
        end
    
        def aes256_gcm_decrypt(value)
      return unless value
    
          expect(diffable.project.repository)
        .to receive(:diff_stats)
        .with(diffable.diff_refs.base_sha, diffable.diff_refs.head_sha)
        .and_call_original
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
            css('pre code').each do |node|
          node.before(node.children).remove
        end
    
          REPLACE_TYPES = {
        'C++ Addons'                => 'Miscellaneous',
        'C/C++ Addons'              => 'Miscellaneous',
        'Debugger'                  => 'Miscellaneous',
        'Deprecated APIs'           => 'Miscellaneous',
        'Tracing'                   => 'Miscellaneous',
        'os'                        => 'OS',
        'StringDecoder'             => 'String Decoder',
        'TLS (SSL)'                 => 'TLS/SSL',
        'UDP / Datagram Sockets'    => 'UDP/Datagram',
        'VM (Executing JavaScript)' => 'VM',
        'Executing JavaScript'      => 'VM' }
    
            css('.class > dt[id]', '.exception > dt[id]', '.attribute > dt[id]').each do |node|
          entries << [node['id'], node['id']]
        end
    
      #
  # Return the content length header
  #
  def set_content_len_header(clen)
    if opts['method'] == 'GET' && (clen == 0 || opts['chunked_size'] > 0)
      # This condition only applies to GET because of the specs.
      # RFC-7230:
      # A Content-Length header field is normally sent in a POST
      # request even when the value is 0 (indicating an empty payload body)
      return ''
    elsif opts['headers'] && opts['headers']['Content-Length']
      # If the module has a modified content-length header, respect that by
      # not setting another one.
      return ''
    end
    set_formatted_header('Content-Length', clen)
  end
    
            # Decodes a Kerberos response
        #
        # @param data [String] the raw response message
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        def decode_kerb_response(data)
          asn1 = OpenSSL::ASN1.decode(data)
          msg_type = asn1.value[0].value[1].value[0].value
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
          def save_params_and_render_consent_form(endpoint)
        @o_auth_application = endpoint.o_auth_application
        @response_type = endpoint.response_type
        @redirect_uri = endpoint.redirect_uri
        @scopes = endpoint.scopes
        save_request_parameters
        @app = UserApplicationPresenter.new @o_auth_application, @scopes
        render :new
      end
    
    module Api
  module OpenidConnect
    class ClientsController < ApplicationController
      skip_before_action :verify_authenticity_token
    
        # set the flash message
    respond_to do |format|
      format.json do
        if success
          render json: AspectMembershipPresenter.new(membership).base_hash
        else
          render plain: membership.errors.full_messages, status: 403
        end
      end
    end
  end
    
        opts = params.require(:conversation).permit(:subject)
    opts[:participant_ids] = person_ids
    opts[:message] = { text: params[:conversation][:text] }
    @conversation = current_user.build_conversation(opts)
    
      def toggle_mobile
    session[:mobile_view] = session[:mobile_view].nil? ? true : !session[:mobile_view]
    
    CLEAN.include '**/*.rbc'
    
    begin
  require 'bundler'
  Bundler::GemHelper.install_tasks
rescue LoadError => e
  $stderr.puts e
end
    
            else
          false # Token is malformed
        end
      end
    
          def is_edit_page
        false
      end
    
    module Gollum
end
Gollum::GIT_ADAPTER = ENV['GIT_ADAPTER'] if ENV['GIT_ADAPTER']
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end
    
      config.fail_fast = ENV['FAIL_FAST'] || false
  config.order = 'random'
end

    
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

    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
          authorize! :show, @order, order_token
        end
    
              @properties = if params[:ids]
                          @properties.where(id: params[:ids].split(',').flatten)
                        else
                          @properties.ransack(params[:q]).result
                        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end

    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :show).find(params[:stock_location_id])
        end
    
            def update
          authorize! :update, @store
          if @store.update(store_params)
            respond_with(@store, status: 200, default_template: :show)
          else
            invalid_resource!(@store)
          end
        end
    
            def show
          @variant = scope.includes(*variant_includes).find(params[:id])
          respond_with(@variant)
        end
    
        it 'allows sidekiq_options to point to different Redi' do
      conn = MiniTest::Mock.new
      conn.expect(:multi, [0, 1])
      DWorker.sidekiq_options('pool' => ConnectionPool.new(size: 1) { conn })
      DWorker.perform_async(1,2,3)
      conn.verify
    end
    
      describe 'scheduler' do
    it 'can start and stop' do
      f = Sidekiq::Scheduled::Poller.new
      f.start
      f.terminate
    end
    
        it 'has no enqueued_at time for jobs enqueued in the future' do
      job_id = ApiWorker.perform_in(100, 1, 'foo')
      job = Sidekiq::ScheduledSet.new.find_job(job_id)
      assert_nil job.enqueued_at
    end
    
        it 'supports I18n.enforce_available_locales = true' do
      I18n.enforce_available_locales = true
      I18n.available_locales = [:en, :jp]
    
          Sidekiq::Testing.inline! do
        assert Sidekiq::Testing.enabled?
        assert Sidekiq::Testing.inline?
      end