
        
              # Reads data from an IO object while it can, returning the data it reads.
      # When it encounters a case when it can't read anymore, it returns the
      # data.
      #
      # @return [String]
      def self.read_until_block(io)
        data = ''
    
          def execute
        options = {}
        options[:check] = false
    
      it 'implicitly has a count of one when no count is specified' do
    'abc'.unpack(unpack_format).should == ['a']
  end
    
      Ruby = Struct.new(:version, :platform)
    
      def self.create_and_kill_critical_thread(pass_after_kill=false)
    ThreadSpecs.create_critical_thread do
      Thread.current.kill
      Thread.pass if pass_after_kill
      ScratchPad.record('status=' + Thread.current.status)
    end
  end
end

    
            private
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
            # Checks if a template URL is given else returns the TEMPLATE_REPO URL
        #
        # @return String
        #
        def template_repo_url
          @template_url || TEMPLATE_REPO
        end
      end
    end
  end
end

    
        def register_new_attachment
      Paperclip::AttachmentRegistry.register(@klass, @name, @options)
    end
    
            def description
          'have an attachment named #{@attachment_name}'
        end
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
        def processor(name) #:nodoc:
      @known_processors ||= {}
      if @known_processors[name.to_s]
        @known_processors[name.to_s]
      else
        name = name.to_s.camelize
        load_processor(name) unless Paperclip.const_defined?(name)
        processor = Paperclip.const_get(name)
        @known_processors[name.to_s] = processor
      end
    end
    
      def pretty?
    params.has_key?('pretty')
  end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
      public
  # DEPRECATED: Prefer defining encode_sync or multi_encode
  def encode(event)
    encoded = multi_encode([event])
    encoded.each {|event,data| @on_event.call(event,data) }
  end # def encode
    
      context 'called with one color' do
    it 'applies same color to all sides' do
      rule = 'border-color: #f00'
    
          expect('.border-style-explicit').to have_rule(rule)
    end
  end
    
        @buttons_list = %w(
      button
      [type='button']
      [type='reset']
      [type='submit']
    )
  end
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'margin: 1px'
    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end
