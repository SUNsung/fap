
        
        module Capistrano
  class Configuration
    # Decorates a Variables object to additionally perform an optional set of
    # user-supplied validation rules. Each rule for a given key is invoked
    # immediately whenever `set` is called with a value for that key.
    #
    # If `set` is called with a callable value or a block, validation is not
    # performed immediately. Instead, the validation rules are invoked the first
    # time `fetch` is used to access the value.
    #
    # A rule is simply a block that accepts two arguments: key and value. It is
    # up to the rule to raise an exception when it deems the value is invalid
    # (or just print a warning).
    #
    # Rules can be registered using the DSL like this:
    #
    #   validate(:my_key) do |key, value|
    #     # rule goes here
    #   end
    #
    class ValidatedVariables < SimpleDelegator
      include Capistrano::ProcHelpers
    
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
    
        context 'and a comment after the last element' do
      let(:b_comment) { ' # comment b' }
    
          # Calls the given block for each `value` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_value
        return pairs.map(&:value).to_enum unless block_given?
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def next
          authorize! :update, @order, order_token
          @order.next!
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        rescue StateMachines::InvalidTransition
          respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
        end
    
            def show
          @option_value = scope.find(params[:id])
          respond_with(@option_value)
        end
    
            def scope
          includes = { variant: [{ option_values: :option_type }, :product] }
          @stock_location.stock_items.accessible_by(current_ability, :read).includes(includes)
        end
    
            def destroy
          authorize! :destroy, stock_location
          stock_location.destroy
          respond_with(stock_location, status: 204)
        end
    
            def update
          authorize! :update, @store
          if @store.update_attributes(store_params)
            respond_with(@store, status: 200, default_template: :show)
          else
            invalid_resource!(@store)
          end
        end