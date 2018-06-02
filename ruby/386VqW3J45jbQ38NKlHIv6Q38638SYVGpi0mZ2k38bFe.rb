
        
            @notification_setting = current_user.notification_settings_for(resource)
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
        groups
  end
end

    
        i0, s0 = index, []
    r1 = _nt_rvalue
    s0 << r1
    if r1
      r2 = _nt__
      s0 << r2
      if r2
        r3 = _nt_not_in_operator
        s0 << r3
        if r3
          r4 = _nt__
          s0 << r4
          if r4
            r5 = _nt_rvalue
            s0 << r5
          end
        end
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::NotInExpression,input, i0...index, s0)
      r0.extend(NotInExpression0)
    else
      @index = i0
      r0 = nil
    end