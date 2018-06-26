
        
          def notification_setting_params
    allowed_fields = NotificationSetting::EMAIL_EVENTS.dup
    allowed_fields << :level
    params.require(:notification_setting).permit(allowed_fields)
  end
end

    
      def all_projects(current_user)
    projects = []
    
      def test_stat_slave
    PTY.open {|master, slave|
      s =  File.stat(slave.path)
      assert_equal(Process.uid, s.uid)
      assert_equal(0600, s.mode & 0777)
    }
  rescue RuntimeError
    skip $!
  end
    
        old_self = prc.call
    
      def self.normal_file
    touch(@file)
    yield @file
  ensure
    rm_r @file
  end
    
      it 'returns 1 if the first argument is a point in time after the second argument (down to a microsecond)' do
    (Time.at(0, 100) <=> Time.at(0, 0)).should == 1
    (Time.at(1202778512, 100) <=> Time.at(1202778512, 99)).should == 1
  end
    
      class CVars
    @@cvar  = :cvar
    @c_ivar = :c_ivar
    
      trap('INT') {
    [jekyllPid, compassPid].each { |pid| Process.kill(9, pid) rescue Errno::ESRCH }
    exit 0
  }
    
        # Creates an instance of CategoryIndex for each category page, renders it, and
    # writes the output to a file.
    #
    #  +category_dir+ is the String path to the category folder.
    #  +category+     is the category currently being processed.
    def write_category_index(category_dir, category)
      index = CategoryIndex.new(self, self.source, category_dir, category)
      index.render(self.layouts, site_payload)
      index.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << index
    
      def render(context)
    config_tag(context.registers[:site].config, @key, @tag, @classname)
  end
end
    
        def get_cached_gist(gist, file)
      return nil if @cache_disabled
      cache_file = get_cache_file_for gist, file
      File.read cache_file if File.exist? cache_file
    end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
      def file_fetch(url, sha1, target)
    filename = File.basename( URI(url).path )
    output = '#{target}/#{filename}'
    begin
      actual_sha1 = file_sha1(output)
      if actual_sha1 != sha1
        fetch(url, sha1, output)
      end
    rescue Errno::ENOENT
      fetch(url, sha1, output)
    end
    return output
  end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
            def rejecting *types
          @rejected_types = types.flatten
          self
        end
    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end

    
      class Railtie
    def self.insert
      Paperclip.options[:logger] = Rails.logger