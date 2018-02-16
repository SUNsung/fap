    def metadata_master_container_path
      @metadata_master_container_path ||= caskroom_path.join(METADATA_SUBDIR)
    end
    
      # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!