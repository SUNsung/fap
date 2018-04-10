
        
            def find_local(username)
      find_remote(username, nil)
    end
    
      class << self
    # Our ID will be composed of the following:
    # 6 bytes (48 bits) of millisecond-level timestamp
    # 2 bytes (16 bits) of sequence data
    #
    # The 'sequence data' is intended to be unique within a
    # given millisecond, yet obscure the 'serial number' of
    # this row.
    #
    # To do this, we hash the following data:
    # * Table name (if provided, skipped if not)
    # * Secret salt (should not be guessable)
    # * Timestamp (again, millisecond-level granularity)
    #
    # We then take the first two bytes of that value, and add
    # the lowest two bytes of the table ID sequence number
    # (`table_name`_id_seq). This means that even if we insert
    # two rows at the same millisecond, they will have
    # distinct 'sequence data' portions.
    #
    # If this happens, and an attacker can see both such IDs,
    # they can determine which of the two entries was inserted
    # first, but not the total number of entries in the table
    # (even mod 2**16).
    #
    # The table name is included in the hash to ensure that
    # different tables derive separate sequence bases so rows
    # inserted in the same millisecond in different tables do
    # not reveal the table ID sequence number for one another.
    #
    # The secret salt is included in the hash to ensure that
    # external users cannot derive the sequence base given the
    # timestamp and table name, which would allow them to
    # compute the table ID sequence number.
    def define_timestamp_id
      return if already_defined?
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
      def preview_url
    if object.needs_redownload?
      media_proxy_url(object.id, :small)
    else
      full_asset_url(object.file.url(:small))
    end
  end
    
          private
    
          def stage_definitions
        stage_config_path.join('*.rb')
      end
    
      deploy_rb = File.expand_path('../../templates/deploy.rb.erb', __FILE__)
  stage_rb = File.expand_path('../../templates/stage.rb.erb', __FILE__)
  capfile = File.expand_path('../../templates/Capfile', __FILE__)
    
          describe 'fetching servers by role' do
        subject { dsl.roles(:app) }
    
      it 'overrides the rake method, but still prints the rake version' do
    out, _err = capture_io do
      flags '--version', '-V'
    end
    expect(out).to match(/\bCapistrano Version\b/)
    expect(out).to match(/\b#{Capistrano::VERSION}\b/)
    expect(out).to match(/\bRake Version\b/)
    expect(out).to match(/\b#{Rake::VERSION}\b/)
  end
    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end