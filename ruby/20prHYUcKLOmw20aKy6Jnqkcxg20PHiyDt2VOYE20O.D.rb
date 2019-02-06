
        
              def before_feature_element(feature_element)
        @indent = 2
        @scenario_indent = 2
        @timings[feature_element_timing_key(feature_element)] = Time.now
      end
    
    require_relative 'websockets'
    
    require 'http/parser'
    
    module Jekyll
  module Deprecator
    extend self
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
            def new; end
    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update_attributes(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end
    
            def order_params
          if params[:order]
            normalize_params
            params.require(:order).permit(permitted_order_attributes)
          else
            {}
          end
        end