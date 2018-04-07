
        
          def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
            doc
      end
    end
  end
end

    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end
    
            Readline::HISTORY << text
        parse_input(environment, text)
      end
    end