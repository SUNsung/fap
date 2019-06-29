
        
        module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
    Given(/^a linked file '(.*?)'$/) do |file|
  # ignoring other linked files
  TestApp.append_to_deploy_file('set :linked_files, ['#{file}']')
end
    
    World(RemoteCommandHelpers)

    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          def ask_question
        $stdout.print question
        $stdout.flush
      end
    
          def add_role(role)
        roles.add role.to_sym
        self
      end
    
              def spree_current_order
            @spree_current_order ||= find_spree_current_order
          end
    
            def index
          @products = if params[:ids]
                        product_scope.where(id: params[:ids].split(',').flatten)
                      else
                        product_scope.ransack(params[:q]).result
                      end
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
        # Returns the timestamp as defined by the <attachment>_updated_at field
    # in the server default time zone unless :use_global_time_zone is set
    # to false.  Note that a Rails.config.time_zone change will still
    # invalidate any path or URL that uses :timestamp.  For a
    # time_zone-agnostic timestamp, use #updated_at.
    def timestamp attachment, style_name
      attachment.instance_read(:updated_at).in_time_zone(attachment.time_zone).to_s
    end