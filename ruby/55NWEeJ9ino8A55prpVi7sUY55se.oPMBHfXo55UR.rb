
        
              # Find commands in the path
      unless (exts = external_commands).empty?
        puts
        puts 'External commands'
        puts_columns exts
      end
    end
  end
    
      def core_tap_origin
    CoreTap.instance.remote || '(none)'
  end
    
        args = dirs + %w[-type f (]
    args.concat UNBREWED_EXCLUDE_FILES.flat_map { |f| %W[! -name #{f}] }
    args.concat UNBREWED_EXCLUDE_PATHS.flat_map { |d| %W[! -path #{d}] }
    args.concat %w[)]
    
        unless updated_taps.empty?
      puts 'Updated #{updated_taps.size} tap#{plural(updated_taps.size)} ' \
           '(#{updated_taps.join(', ')}).'
      updated = true
    end
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end
