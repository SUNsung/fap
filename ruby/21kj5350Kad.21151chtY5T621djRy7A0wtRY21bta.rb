
        
              # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
    module VagrantPlugins
  module CommandBox
    module Command
      class Repackage < Vagrant.plugin('2', :command)
        def execute
          opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box repackage <name> <provider> <version>'
          end
    
      it 'does not decode a float when fewer bytes than a float remain and the '*' modifier is passed' do
    [ ['\xff', []],
      ['\xff\x00', []],
      ['\xff\x00\xff', []]
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
    When /^(?:|I )fill in '([^']*)' with '([^']*)'$/ do |field, value|
  fill_in(field, :with => value)
end
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end