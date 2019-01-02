
        
            def limit_reached_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:limit_reached)[0] || false
    end
    
    describe GroupUser do
    
            def collection_method
          :issues_comments
        end
    
            retval
      end
    
    
    {            # These fields are not displayed for LegacyDiffNote notes, so it
            # doesn't really matter what we set them to.
            a_mode: '100644',
            b_mode: '100644',
            new_file: false
          }
        end
      end
    end
  end
end

    
    module Gitlab
  module GithubImport
    module Representation
      class LfsObject
        include ToHash
        include ExposeAttribute
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
    describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
      platform_is_not :windows do
    it 'returns true when passed ?l if the argument is a symlink' do
      link = tmp('file_symlink.lnk')
      File.symlink(@file, link)
      begin
        Kernel.test(?l, link).should be_true
      ensure
        rm_r link
      end
    end
  end
    
      it 'raises ArgumentError if 3 or more arguments provided' do
    lambda {
      catch :blah do
        throw :blah, :return_value, 2
      end
    }.should raise_error(ArgumentError)
    
      it 'raises ArgumentError if no block or proc is provided' do
    lambda do
      trace_var :$Kernel_trace_var_global
    end.should raise_error(ArgumentError)
  end
end

    
      it 'ignores single-line arrays' do
    expect_no_offenses('[a, b, c]')
  end
    
                  expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                        '#{b}#{close}',
                                        suffix].join($RS))
            end
          end
        end
      end
    end
    
            expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                  '#{b}#{close}',
                                  suffix].join($RS))
      end
    end
  end
end

    
          # Checks whether this case statement has an `else` branch.
      #
      # @return [Boolean] whether the `case` statement has an `else` branch
      def else?
        loc.else
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `if` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `if` nodes within RuboCop.
    class IfNode < Node
      include ConditionalNode
      include ModifierNode
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
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

    
            def advance
          authorize! :update, @order, order_token
          while @order.next; end
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        end
    
            def prepare_event
          return unless @event = params[:fire]
    
            def new
          @payment_methods = Spree::PaymentMethod.available
          respond_with(@payment_methods)
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
            def update
          authorize! :update, taxonomy
          if taxonomy.update_attributes(taxonomy_params)
            respond_with(taxonomy, status: 200, default_template: :show)
          else
            invalid_resource!(taxonomy)
          end
        end
    
            def index
          @zones = Zone.accessible_by(current_ability, :read).order('name ASC').ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@zones)
        end
    
      # The CategoryFeed class creates an Atom feed for the specified category.
  class CategoryFeed < Page
    
    end
Liquid::Template.register_filter OctopressLiquidFilters
    
          unless file.file?
        return 'File #{file} could not be found'
      end