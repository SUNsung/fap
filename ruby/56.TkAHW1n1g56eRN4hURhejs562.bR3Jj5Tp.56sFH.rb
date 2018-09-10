
        
            formula.brew do
      formula.patch
    
      def describe_ruby
    ruby = which 'ruby'
    return 'N/A' if ruby.nil?
    ruby_binary = Utils.popen_read ruby, '-rrbconfig', '-e', \
      'include RbConfig;print'#{CONFIG['bindir']}/#{CONFIG['ruby_install_name']}#{CONFIG['EXEEXT']}''
    ruby_binary = Pathname.new(ruby_binary).realpath
    if ruby == ruby_binary
      ruby
    else
      '#{ruby} => #{ruby_binary}'
    end
  end
    
      def self.class_s(name)
    Formulary.class_s(name)
  end
    
        value = (options[:tokenizer] || DEFAULT_TOKENIZER).call(value) if value.is_a?(String)
    
            def metadata
          @metadata ||= Coverage::Metadata.new(self)
        end
    
        ShareVisibility.joins('INNER JOIN photos ON photos.id = share_visibilities.shareable_id')
                   .where(shareable_type: 'Photo', photos: {public: true}).delete_all