
        
        module ActionView
  module Helpers
    module Tags # :nodoc:
      class DateSelect < Base # :nodoc:
        def initialize(object_name, method_name, template_object, options, html_options)
          @html_options = html_options
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
        # Controls whether an action should be rendered using a layout.
    # If you want to disable any <tt>layout</tt> settings for the
    # current action so that it is rendered without a layout then
    # either override this method in your controller to return false
    # for that action or set the <tt>action_has_layout</tt> attribute
    # to false before rendering.
    def action_has_layout?
      @_action_has_layout
    end
    
        rake_tasks do |app|
      unless app.config.api_only
        load 'action_view/tasks/cache_digests.rake'
      end
    end
  end
end

    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy.text-info')).to be_a Nokogiri::XML::Element
    end
  end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
            it 'adds errors on validation when updated options are unparsable' do
          scenario_import.merges = {
            '0' => {
              'options' => '{'
            }
          }
          expect(scenario_import).not_to be_valid
          expect(scenario_import).to have(1).error_on(:base)
        end
      end
    end
    }
    
      describe '#sort_tuples!' do
    let(:tuples) {
      time = Time.now
      [
        [2, 'a', time - 1],  # 0
        [2, 'b', time - 1],  # 1
        [1, 'b', time - 1],  # 2
        [1, 'b', time],      # 3
        [1, 'a', time],      # 4
        [2, 'a', time + 1],  # 5
        [2, 'a', time],      # 6
      ]
    }
    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
              result
        end
    
            # This contains all the command plugins by name, and returns
        # the command class and options. The command class is wrapped
        # in a Proc so that it can be lazy loaded.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        attr_reader :commands
    
            # Capture all bad configuration calls and save them for an error
        # message later during validation.
        def method_missing(name, *args, &block)
          return super if @__finalized
    
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

    
        # Return the number of elements in this registry.
    #
    # @return [Integer]
    def length
      @items.keys.length
    end
    alias_method :size, :length
    
    Then(/^the default stage files are created$/) do
  staging = TestApp.test_app_path.join('config/deploy/staging.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(staging)).to be true
  expect(File.exist?(production)).to be true
end
    
    Given(/config stage file has line '(.*?)'/) do |line|
  TestApp.append_to_deploy_file(line)
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          def response
        return @response if defined? @response
    
          private
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
      it 'ignores single-line arrays' do
    expect_no_offenses('[a, b, c]')
  end
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) { ['[', '1', ']'] }
  end
    
          it 'detects closing brace on different line from multiline element' do
        src = construct(false, a, make_multi(multi), true)
        inspect_source(src)
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end

    
            def update
          authorize! :update, @order, order_token
    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update_attributes(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end
    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def destroy
          @stock_item = StockItem.accessible_by(current_ability, :destroy).find(params[:id])
          @stock_item.destroy
          respond_with(@stock_item, status: 204)
        end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
            def update
          authorize! :update, user
          if user.update_attributes(user_params)
            respond_with(user, status: 200, default_template: :show)
          else
            invalid_resource!(user)
          end
        end