
        
          end
    
      def resource
    @resource ||=
      if params[:project_id].present?
        Project.find(params[:project_id])
      elsif params[:namespace_id].present?
        Group.find(params[:namespace_id])
      end
  end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
          def additional_entries
        entries = []