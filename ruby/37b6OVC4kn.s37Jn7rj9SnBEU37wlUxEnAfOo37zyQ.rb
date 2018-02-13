
        
        end

    
        def doc_mtime(doc)
      [@store.mtime(doc.index_path).to_i, @store.mtime(doc.db_path).to_i].max
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
          # Renders a template, handling the template as a string, but otherwise
      # acting the same way as {#render}.
      #
      # @return [String]
      def render_string
        Erubis::Eruby.new(template, trim: true).result(binding)
      end
    
        # Returns an array of addresses ranges
    #
    # @return [Array<String>]
    def addresses
      (boundary || '').split('\n')
    end
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(220\s*[^\r\n]+)/i,
      :user		=> /^USER\s+([^\s]+)/i,
      :pass		=> /^PASS\s+([^\s]+)/i,
      :login_pass => /^(230\s*[^\n]+)/i,
      :login_fail => /^(5\d\d\s*[^\n]+)/i,
      :bye      => /^221/
    }
  end
    
                when :user
              # When the last command was a username login
              # We might keep track on this one in future
            when :pass
              # Perfect we get an +OK after a PASS command this means right password given :-)
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}