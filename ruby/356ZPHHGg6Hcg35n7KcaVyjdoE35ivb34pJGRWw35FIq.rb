
        
        World(VagrantHelpers)

    
        def role_properties_for(names, &block)
      servers.role_properties_for(names, &block)
    end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
        private
    
            expect(cop.messages).to eq(['Empty line missing at block body '\
                                    'beginning.',
                                    'Empty line missing at block body end.'])
      end
    
            it { expect(send_node.parenthesized?).to be_falsey }
      end
    
          expect(new_source).to eq(<<~RUBY)
        def foo
          super({}, something)
        end
      RUBY
    end
  end
    
            expect(new_source).to eq(<<~RUBY)
          def func
            [1, 2, 3].each do |n|
              puts n
            end
          end
        RUBY
      end
    end
    
        it_behaves_like 'accepts', 'b.value == 2'
    it_behaves_like 'accepts', 'b&.value == 2'
    it_behaves_like 'accepts', '@value == 2'
    it_behaves_like 'accepts', '@@value == 2'
    it_behaves_like 'accepts', 'b = 1; b == 2'
    it_behaves_like 'accepts', '$var == 5'
    it_behaves_like 'accepts', 'foo == 'bar''
    it_behaves_like 'accepts', 'foo[0] > 'bar' || baz != 'baz''
    it_behaves_like 'accepts', 'node = last_node.parent'
    it_behaves_like 'accepts', '(first_line - second_line) > 0'
    it_behaves_like 'accepts', '5 == 6'
    it_behaves_like 'accepts', '[1, 2, 3] <=> [4, 5, 6]'
    it_behaves_like 'accepts', '!true'
    it_behaves_like 'accepts', 'not true'
    it_behaves_like 'accepts', '0 <=> val'
    it_behaves_like 'accepts', ''foo' === bar'
    
    
    {      # Checks whether the `hash` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `hash` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
      def self.check_unused_translations
    self.used_translations ||= []
    self.unused_translation_messages = []
    self.unused_translations = []
    load_translations(translations)
    translation_diff = unused_translations - used_translations
    translation_diff.each do |translation|
      Spree.unused_translation_messages << '#{translation} (#{I18n.locale})'
    end
  end
    
          # the order builds a shipment on its own on transition to delivery, but we want
      # the original exchange shipment, not the built one
      order.shipments.destroy_all
      shipments.each { |shipment| shipment.update(order_id: order.id) }
      order.update!(state: 'confirm')
    
              it 'links the shipping rate and the tax rate' do
            shipping_rates = subject.shipping_rates(package)
            expect(shipping_rates.first.tax_rate).to eq(tax_rate)
          end
        end
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end
    
            def product_property_params
          params.require(:product_property).permit(permitted_product_properties_attributes)
        end
      end
    end
  end
end

    
            def new
          authorize! :admin, ReturnAuthorization
        end
    
          get 'array', ids: %w[1 2 890]
      expect(last_response.status).to eq(200)
      expect(last_response.body).to eq('array int works')
    end
    
          module ClassMethods
        # Add helper methods that will be accessible from any
        # endpoint within this namespace (and child namespaces).
        #
        # When called without a block, all known helpers within this scope
        # are included.
        #
        # @param [Array] new_modules optional array of modules to include
        # @param [Block] block optional block of methods to include
        #
        # @example Define some helpers.
        #
        #     class ExampleAPI < Grape::API
        #       helpers do
        #         def current_user
        #           User.find_by_id(params[:token])
        #         end
        #       end
        #     end
        #
        # @example Include many modules
        #
        #     class ExampleAPI < Grape::API
        #       helpers Authentication, Mailer, OtherModule
        #     end
        #
        def helpers(*new_modules, &block)
          include_new_modules(new_modules) if new_modules.any?
          include_block(block) if block_given?
          include_all_in_scope if !block_given? && new_modules.empty?
        end