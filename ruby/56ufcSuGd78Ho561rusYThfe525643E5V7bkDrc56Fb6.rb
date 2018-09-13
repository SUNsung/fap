
        
              it 'generates the correct git command with an array of paths and/or pathspecs' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/*.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
            Fastlane::FastFile.new.parse('lane :test do
          import_certificate ({
            keychain_name: '#{keychain}',
            certificate_path: '#{cert_name}',
            certificate_password: '#{password}',
            log_output: true
          })
        end').runner.execute(:test)
      end
    end
  end
end

    
            expect(FastlaneCore::CertChecker.install_wwdr_certificate).to be(true)
      end
    end
  end
end

    
              expect(config[:int_value]).to eq(10)
        end
    
        it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
        it 'opens the dry run modal even when clicking on the refresh icon' do
      visit edit_agent_path(agent)
      find('.agent-dry-run-button span.glyphicon').click
      expect(page).to have_text('Event to send (Optional)')
    end
    
        class Agents::DotBar < Agent
      cannot_be_scheduled!
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
      describe '#recursively_interpolate_jsonpaths' do
    it 'interpolates all string values in a structure' do
      struct = {
        :int => 5,
        :string => 'this <escape $.works>',
        :array => ['<works>', 'now', '<$.there.world>'],
        :deep => {
          :string => 'hello <there.world>',
          :hello => :world
        }
      }
      data = { :there => { :world => 'WORLD' }, :works => 'should work' }
      expect(Utils.recursively_interpolate_jsonpaths(struct, data)).to eq({
        :int => 5,
        :string => 'this should+work',
        :array => ['should work', 'now', 'WORLD'],
        :deep => {
          :string => 'hello WORLD',
          :hello => :world
        }
      })
    end
  end
    
    describe AgentLog do
  describe 'validations' do
    before do
      @log = AgentLog.new(:agent => agents(:jane_website_agent), :message => 'The agent did something', :level => 3)
      expect(@log).to be_valid
    end
    
          result
    end
    
        # Deletes a machine by UUID.
    #
    # The machine being deleted with this UUID must either be locked
    # by this index or must be unlocked.
    #
    # @param [Entry] entry The entry to delete.
    # @return [Boolean] true if delete is successful
    def delete(entry)
      return true if !entry.id
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
              @registered.each do |plugin|
            plugin.config.each do |key, klass|
              result[key] = klass
            end
          end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
    describe 'Kernel#warn' do
  before :each do
    @before_verbose = $VERBOSE
    @before_separator = $/
  end
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
          def order_token
        request.headers['X-Spree-Order-Token'] || params[:order_token]
      end
    
            def log_state_changes
          if @order.previous_changes[:state]
            @order.log_state_changes(
              state_name: 'order',
              old_state: @order.previous_changes[:state].first,
              new_state: @order.previous_changes[:state].last
            )
          end
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

    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end
    
            def remove_coupon_code
          find_order(true)
          authorize! :update, @order, order_token
          @handler = Spree::PromotionHandler::Coupon.new(@order).remove(params[:coupon_code])
          status = @handler.successful? ? 200 : 404
          render 'spree/api/v1/promotions/handler', status: status
        end
    
            def index
          @payments = @order.payments.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@payments)
        end
    
            def find_product
          super(params[:id])
        end