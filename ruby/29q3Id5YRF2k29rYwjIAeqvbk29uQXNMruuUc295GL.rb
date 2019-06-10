
        
                  issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
          def initialize(app)
        @app = app
      end
    
            def keyword_splat?
          [first, second].any?(&:kwsplat_type?)
        end
      end
    
            def on_send(node)
          erb_new_with_non_keyword_arguments(node) do |arguments|
            return if correct_arguments?(arguments)
    
        # data tar.
    tar_path(staging_path(''), datatar_path)