
        
            it 'sends escape characters correctly to the backend' do
      emitter.events << Event.new(payload: {data: 'Line 1\nLine 2\nLine 3'})
      formatting_agent.sources << emitter
      formatting_agent.options.merge!('instructions' => {'data' => '{{data | newline_to_br | strip_newlines | split: '<br />' | join: ','}}'})
      formatting_agent.save!
    
      describe '#omniauth_provider_icon' do
    it 'returns a correct icon tag for Twitter' do
      icon = omniauth_provider_icon(:twitter)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-twitter')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
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
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
      describe 'changes to type' do
    it 'validates types' do
      source = Agent.new
      source.type = 'Agents::WeatherAgent'
      expect(source).to have(0).errors_on(:type)
      source.type = 'Agents::WebsiteAgent'
      expect(source).to have(0).errors_on(:type)
      source.type = 'Agents::Fake'
      expect(source).to have(1).error_on(:type)
    end
    
        describe '-' do
      it 'left-justifies the result of conversion if width is specified' do
        format('%-10b', 10).should == '1010      '
        format('%-10B', 10).should == '1010      '
        format('%-10d', 112).should == '112       '
        format('%-10i', 112).should == '112       '
        format('%-10o', 87).should == '127       '
        format('%-10u', 112).should == '112       '
        format('%-10x', 196).should == 'c4        '
        format('%-10X', 196).should == 'C4        '
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
        $Kernel_trace_var_global = nil
    $Kernel_trace_var_extra  = nil
  end
    
        def replace_vars(less)
      less = less.dup
      # skip header comment
      less =~ %r(\A/\*(.*?)\*/)m
      from           = $~ ? $~.to_s.length : 0
      less[from..-1] = less[from..-1].
          gsub(/(?!@mixin|@media|@page|@keyframes|@font-face|@-\w)@/, '$').
          # variables that would be ignored by gsub above: e.g. @page-header-border-color
          gsub(/@(page[\w-]+)/, '$\1')
      less
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
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def mine
          if current_api_user.persisted?
            @orders = current_api_user.orders.reverse_chronological.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          else
            render 'spree/api/errors/unauthorized', status: :unauthorized
          end
        end
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability, :read).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end
    
            private
    
            def index
          authorize! :admin, ReturnAuthorization
          @return_authorizations = order.return_authorizations.accessible_by(current_ability, :read).
                                   ransack(params[:q]).result.
                                   page(params[:page]).per(params[:per_page])
          respond_with(@return_authorizations)
        end
    
            private