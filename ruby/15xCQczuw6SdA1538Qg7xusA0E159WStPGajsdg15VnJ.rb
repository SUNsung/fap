
        
            it 'returns a Glyphicon icon element with an addidional class' do
      icon = icon_tag('glyphicon-help', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help.text-info')).to be_a Nokogiri::XML::Element
    end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'outputs a structure containing name, description, the date, all agents & their links' do
      data = exporter.as_json
      expect(data[:name]).to eq(name)
      expect(data[:description]).to eq(description)
      expect(data[:source_url]).to eq(source_url)
      expect(data[:guid]).to eq(guid)
      expect(data[:schema_version]).to eq(1)
      expect(data[:tag_fg_color]).to eq(tag_fg_color)
      expect(data[:tag_bg_color]).to eq(tag_bg_color)
      expect(data[:icon]).to eq(icon)
      expect(Time.parse(data[:exported_at])).to be_within(2).of(Time.now.utc)
      expect(data[:links]).to eq([{ :source => guid_order(agent_list, :jane_weather_agent), :receiver => guid_order(agent_list, :jane_rain_notifier_agent)}])
      expect(data[:control_links]).to eq([])
      expect(data[:agents]).to eq(agent_list.sort_by{|a| a.guid}.map { |agent| exporter.agent_as_json(agent) })
      expect(data[:agents].all? { |agent_json| agent_json[:guid].present? && agent_json[:type].present? && agent_json[:name].present? }).to be_truthy
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
        it 'should not provide the since attribute on first run' do
      expect(@checker.send(:query_parameters)).to eq({})
    end
    
        assert_equal Float::INFINITY, (1...).size
    assert_equal Float::INFINITY, (1.0...).size
    assert_equal Float::INFINITY, (...1).size
    assert_equal Float::INFINITY, (...1.0).size
    assert_nil ('a'...).size
  end
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end
    
          attr_reader :locations, :values, :fetched_keys
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end
    
              @line_item = Spree::Dependencies.cart_add_item_service.constantize.call(order: order,
                                                                                  variant: variant,
                                                                                  quantity: params[:line_item][:quantity],
                                                                                  options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
            def apply_coupon_code
          find_order
          authorize! :update, @order, order_token
          @order.coupon_code = params[:coupon_code]
          @handler = PromotionHandler::Coupon.new(@order).apply
          status = @handler.successful? ? 200 : 422
          render 'spree/api/v1/promotions/handler', status: status
        end
    
              params.require(:product).permit(
            variants_key => [permitted_variant_attributes, :id]
          ).delete(variants_key) || []
        end