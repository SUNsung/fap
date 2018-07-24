
        
        # puts '\nDone.'

    
      def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
    EOS
end
    
    With optional '-t <bundle-id>', silently test if a given app
is running, exiting with an error code if not.
    
    require 'formula'
require 'system_config'
require 'stringio'
require 'socket'
    
              urls += mirrors
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
            private