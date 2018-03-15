
        
            def to_json
      JSON.generate(as_json)
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def join(*args)
      self.class.join self, *args
    end
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
          # This inserts a block with the given key and value.
      #
      # @param [String] key
      # @param [String] value
      def insert(key, value)
        # Insert the new block into the value
        new_block = <<BLOCK
# VAGRANT-BEGIN: #{key}
#{value.strip}
# VAGRANT-END: #{key}
BLOCK
    
    def process_args
  if ARGV.first =~ %r{^-+h(?:elp)?$}
    puts usage
    exit 0
  elsif ARGV.length == 1
    $app_path = ARGV.first
  else
    puts usage
    exit 1
  end
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
    
      yield
end