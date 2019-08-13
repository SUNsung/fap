
        
              private def_delegator :@obj, :config, :fallback_data
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
            @filters << filter
      end
    
            def diff_stats_collection
          strong_memoize(:diff_stats) do
            # There are scenarios where we don't need to request Diff Stats,
            # when caching for instance.
            next unless @include_stats
            next unless diff_refs
    
      it 'calls Gitlab::Diff::File#unfold_diff_lines with correct position' do
    position = instance_double(Gitlab::Diff::Position, file_path: 'README')
    readme_file = instance_double(Gitlab::Diff::File, file_path: 'README')
    other_file = instance_double(Gitlab::Diff::File, file_path: 'foo.rb')
    nil_path_file = instance_double(Gitlab::Diff::File, file_path: nil)
    
      config.logger = Logger.new($stdout)
  Rails.logger  = config.logger
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
        register_options(
      [
        Opt::LPORT(4444),
        OptAddress.new('RHOST', [false, 'The target address', '']),
      ], Msf::Handler::BindUdp)
    
        # Some of the shenanigans above could have appended a dot, which will
    # cause a syntax error.  Remove any trailing dots.
    b64.chomp!('.')
    
    require 'msf/core/handler/bind_tcp'
require 'msf/core/payload/windows/x64/bind_tcp_rc4'
    
      def initialize(info = {})
    super(update_info(info,
      'Name'        => 'Gather PDF Authors',
      'Description' => %q{
        This module downloads PDF documents and extracts the author's
        name from the document metadata.
    }
    
      def validate(data_service)
    raise 'Invalid data_service: #{data_service.class}, not of type Metasploit::Framework::DataService' unless data_service.is_a? (Metasploit::Framework::DataService)
    raise 'Cannot register null data service data_service' unless data_service
    raise 'Data Service already exists' if data_service_exist?(data_service)
    # Raising an error for local DB causes startup to fail if there is a DB configured but we are unable to connect
    # TODO: The check here shouldn't be dependent on if the data_service is local or not. We shouldn't
    # connect to any data service if it is not online/active. This can likely be fixed by making a true
    # LocalDataService instead of using DBManager.
    unless data_service.is_local?
      raise 'Data Service does not appear to be responding' unless data_service.active
    end
  end
    
        path = datastore['PATH'] || session.sys.config.getenv('USERPROFILE')
    path.chomp!('\\')
    
            def send_missing_closing_parens?(parent, child, heredoc)
          parent&.call_type? &&
            parent.arguments.include?(child) &&
            parent.loc.begin &&
            parent.loc.end.line != heredoc.last_line
        end
    
          it_behaves_like 'nonmatching'
    end
    
        context 'inside a class' do
      it 'registers an offense when a modifier is ouside the block and a ' \
        'method is defined only inside the block' do
        src = <<~RUBY
          class A
            #{modifier}
            A.class_eval do
              def method1
              end
            end
          end
        RUBY
        inspect_source(src)
        expect(cop.offenses.size).to eq(1)
      end
    
                corrector.insert_after(node_range, '\n')
          end
        end
    
          def product_scope
        if @current_user_roles.include?('admin')
          scope = Product.with_deleted.accessible_by(current_ability, :show).includes(*product_includes)
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
            def ready
          unless @shipment.ready?
            if @shipment.can_ready?
              @shipment.ready!
            else
              render 'spree/api/v1/shipments/cannot_ready_shipment', status: 422 and return
            end
          end
          respond_with(@shipment, default_template: :show)
        end
    
            def show
          @stock_item = scope.find(params[:id])
          respond_with(@stock_item)
        end
    
            private
    
                def index
              render_serialized_payload { serialize_collection(resource) }
            end