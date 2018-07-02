
        
              # The instance of ActionView::Base that is used by +render+.
      def view
        @view ||= begin
          view = @controller.view_context
          view.singleton_class.include(_helpers)
          view.extend(Locals)
          view.rendered_views = rendered_views
          view.output_buffer = output_buffer
          view
        end
      end
    
            attributes.flat_map do |key, value|
          if value.is_a?(Hash) && !table.has_column?(key)
            associated_predicate_builder(key).expand_from_hash(value)
          elsif table.associated_with?(key)
            # Find the foreign key when using queries such as:
            # Post.where(author: author)
            #
            # For polymorphic relationships, find the foreign key and type:
            # PriceEstimate.where(estimate_of: treasure)
            associated_table = table.associated_table(key)
            if associated_table.polymorphic_association?
              case value.is_a?(Array) ? value.first : value
              when Base, Relation
                value = [value] unless value.is_a?(Array)
                klass = PolymorphicArrayValue
              end
            end
    
    class ActionCable::Channel::BroadcastingTest < ActionCable::TestCase
  class ChatChannel < ActionCable::Channel::Base
  end
    
            pubsub.expect(:subscribe, nil, ['channel', Proc, Proc])
        pubsub.expect(:unsubscribe, nil, ['channel', Proc])
    
    require 'test_helper'
require 'stubs/test_server'
    
        def send_async(method, *args)
      send method, *args
    end
    
          topic = Topic.find_by(id: topic_id)
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
            It is possible to specify a list of dependencies which will be used by
        the template in the `Podfile.default` (normal targets) `Podfile.test`
        (test targets) files which should be stored in the
        `~/.cocoapods/templates` folder.
      DESC
      self.arguments = [
        CLAide::Argument.new('XCODEPROJ', :false),
      ]
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end