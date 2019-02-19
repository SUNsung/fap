
        
            it 'sends escape characters correctly to the backend' do
      emitter.events << Event.new(payload: {data: 'Line 1\nLine 2\nLine 3'})
      formatting_agent.sources << emitter
      formatting_agent.options.merge!('instructions' => {'data' => '{{data | newline_to_br | strip_newlines | split: '<br />' | join: ','}}'})
      formatting_agent.save!
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
      describe '#recursively_interpolate_jsonpaths' do
    it 'interpolates all string values in a structure' do
      struct = {
        :int => 5,
        :string => 'this <escape $.works>',
        :array => ['<works>', 'now', '<$.there.world>'],
        :deep => {
          :string => 'hello <there.world>',
          :hello => :world
        }
      }
      data = { :there => { :world => 'WORLD' }, :works => 'should work' }
      expect(Utils.recursively_interpolate_jsonpaths(struct, data)).to eq({
        :int => 5,
        :string => 'this should+work',
        :array => ['should work', 'now', 'WORLD'],
        :deep => {
          :string => 'hello WORLD',
          :hello => :world
        }
      })
    end
  end
    
          @log.level = 0
      expect(@log).to be_valid
    end
  end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
          max_length = if tag = str.slice!(/ \[.+\]\z/)
        terminal_width - tag.length
      else
        terminal_width
      end
    
            css('h1 + code').each do |node|
          node.before('<p></p>')
          while node.next_element.name == 'code'
            node.previous_element << ' '
            node.previous_element << node.next_element
          end
          node.previous_element.prepend_child(node)
        end
    
    module Sass
  module CacheStores
    # A backend for the Sass cache using the filesystem.
    class Filesystem < Base
      # The directory where the cached files will be stored.
      #
      # @return [String]
      attr_accessor :cache_location
    
        # Parses the command-line arguments and runs the executable.
    # Calls `Kernel#exit` at the end, so it never returns.
    #
    # @see #parse
    def parse!
      # rubocop:disable RescueException
      begin
        parse
      rescue Exception => e
        # Exit code 65 indicates invalid data per
        # http://www.freebsd.org/cgi/man.cgi?query=sysexits. Setting it via
        # at_exit is a bit of a hack, but it allows us to rethrow when --trace
        # is active and get both the built-in exception formatting and the
        # correct exit code.
        at_exit {exit Sass::Util.windows? ? 13 : 65} if e.is_a?(Sass::SyntaxError)
    
          # Splits a filename into three parts, a directory part, a basename, and an extension
      # Only the known extensions returned from the extensions method will be recognized as such.
      def split(name)
        extension = nil
        dirname, basename = File.dirname(name), File.basename(name)
        if basename =~ /^(.*)\.(#{extensions.keys.map {|e| Regexp.escape(e)}.join('|')})$/
          basename = $1
          extension = $2
        end
        [dirname, basename, extension]
      end