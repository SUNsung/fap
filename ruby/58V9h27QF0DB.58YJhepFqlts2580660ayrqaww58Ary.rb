
        
                if params[:add_to_search_list]
          keychains = Action.sh('security list-keychains -d user').shellsplit
          keychains << File.expand_path(keychain_path)
          commands << Fastlane::Actions.sh('security list-keychains -s #{keychains.shelljoin}', log: false)
        end
    
          it 'get SVN build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
            get_build_number_repository
        end').runner.execute(:test)
    
              results
        end
    
    module Vagrant
  module Util
    class IO
      # The chunk size for reading from subprocess IO.
      READ_CHUNK_SIZE = 4096
    
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
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
      # Removes trailing forward slash from a string for easily appending url segments
  def strip_slash(input)
    if input =~ /(.+)\/$|^\/$/
      input = $1
    end
    input
  end
    
        # Determines whether the instance responds to this attribute. Used to prevent
    # calculations on fields we won't even store.
    def instance_respond_to?(attr)
      instance.respond_to?(:'#{name}_#{attr}')
    end