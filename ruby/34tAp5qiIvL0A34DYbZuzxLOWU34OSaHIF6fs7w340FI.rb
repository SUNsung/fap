
        
            should 'return false with all not match path' do
      data = ['a*', 'b?']
      assert !@filter.glob_include?(data, 'ca.txt')
      assert !@filter.glob_include?(data, 'ba.txt')
    end
    
          private def_delegator :@obj, :config, :fallback_data
    
    # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
        before_validation :validate_source
    
          def exchange_multiplier
        @payment.payment_method.try(:exchange_multiplier) || 1.0
      end
    end
  end
end

    
                if response.cvv_result
              self.cvv_response_code = response.cvv_result['code']
              self.cvv_response_message = response.cvv_result['message']
            end
          end
          send('#{success_state}!')
        else
          send(failure_state)
          gateway_error(response)
        end
      end
    
        def validators
      @validators ||= permitted_eligibility_validators.map { |v| v.new(@return_item) }
    end
  end
end

    
                inventory_units.each do |inventory_unit|
              inventory_unit.shipment = shipment
    
    class UnableToChargeForUnreturnedItems < StandardError; end

    
            unprocessable_entity(exception.message)
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
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
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
    
              @properties = if params[:ids]
                          @properties.where(id: params[:ids].split(',').flatten)
                        else
                          @properties.ransack(params[:q]).result
                        end
    
            def remove
          quantity = if params.key?(:quantity)
                       params[:quantity].to_i
                     else
                       @shipment.inventory_units_for(variant).sum(:quantity)
                     end