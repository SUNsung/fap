
        
              it 'raises an exception when use passes workspace' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_build_number(xcodeproj: 'project.xcworkspace')
          end').runner.execute(:test)
        end.to raise_error('Please pass the path to the project, not the workspace')
      end
    
          it 'automatically removes new lines from the version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3\n', bump_type: 'major')
        end').runner.execute(:test)
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
    class REST::MediaAttachmentSerializer < ActiveModel::Serializer
  include RoutingHelper
    
            expect(response).to have_http_status(:missing)
      end
    end
  end
end

    
          subdir
    end
    
            def self.options
          [[
            '--all', 'Remove all the cached pods without asking'
          ]].concat(super)
        end
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def print_info
          UI.puts '\nTo learn more about the template see `#{template_repo_url}`.'
          UI.puts 'To learn more about creating a new pod, see `#{CREATE_NEW_POD_INFO_URL}`.'
        end
    
            def operator_assignment_node
          return nil unless node.parent
          return nil unless OPERATOR_ASSIGNMENT_TYPES.include?(node.parent.type)
          return nil unless node.sibling_index.zero?
          node.parent
        end
    
              lambda do |corrector|
            corrector.replace(center.source_range, new_center)
          end
        end
      end
    end
  end
end

    
              annotations.reverse_each do |line_number, annotation|
            reconstructed.insert(line_number, annotation)
          end
    
        expect(corrected).to eq(''something'.to_sym')
  end
end
