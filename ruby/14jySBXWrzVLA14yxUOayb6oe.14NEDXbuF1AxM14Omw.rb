
        
              # Topic may be hard deleted due to spam, no point complaining
      # we would have to look at the topics table id sequence to find cases
      # where this was called with an invalid id, no point really
      return unless topic.present?
    
      def set_permission(permission_name, value)
    self.send('#{permission_name}=', value)
    save_and_refresh_staff_groups!
  end
    
          html_filters.push 'coffeescript/clean_html_v1', 'coffeescript/entries_v1', 'title'
    
        html_filters.push 'sinon/clean_html', 'sinon/entries'
    
        def parse(response)
      unless response.url == root_url || self.class.version == 'Guide'
        response.body.sub!(/<nav class='devsite-nav-responsive-sidebar.+?<\/nav>/m, '')
        response.body.gsub!(/<li class='devsite-nav-item'>.+?<\/li>/m, '')
      end
    
            a_split <=> b_split
      else
        a.casecmp(b)
      end
    end
  end
end

    
      # Returns true if the set and the given set have no element in
  # common.  This method is the opposite of +intersect?+.
  #
  #   Set[1, 2, 3].disjoint? Set[3, 4]   #=> false
  #   Set[1, 2, 3].disjoint? Set[4, 5]   #=> true
  def disjoint?(set)
    !intersect?(set)
  end
    
      def self.main_thread2(critical_thread)
    Thread.pass # The join below seems to cause a deadlock with CRuby unless Thread.pass is called first
    critical_thread.join
    Thread.critical.should == false
  end
    
        run.should be_true
  end
    
          if tags.include?(:run)
        odeprecated ''depends_on ... => :run''
      end
    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN
    
              reconstructed.join
        end