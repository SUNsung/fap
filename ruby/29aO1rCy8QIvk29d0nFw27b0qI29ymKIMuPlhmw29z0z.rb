
        
              topic = Topic.find_by(id: topic_id)
    
      private
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        find_union(segments, Group).order_id_desc
  end
    
      # Finds the projects belonging to the user in '@user', limited to either
  # public projects or projects visible to the given user.
  #
  # current_user - When given the list of projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
      def clean_up_export_files
    Gitlab::Popen.popen(%W(find #{path} -not -path #{path} -mmin +#{mmin} -delete))
  end
end

    
            # This method is called if the underying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
        # @abstract
    #
    # Update the clone on the deployment target
    #
    # @return void
    #
    def update
      raise NotImplementedError, 'Your SCM strategy module should provide a #update method'
    end
    
            it 'returns the servers' do
          expect(subject.map(&:hostname)).to eq %w{example3.com}
        end
      end