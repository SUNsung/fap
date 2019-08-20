
        
            it 'does not use older tags when requested not to', :needs_macos do
      allow(ARGV).to receive(:skip_or_later_bottles?).and_return(true)
      allow(OS::Mac).to receive(:prerelease?).and_return(true)
      subject[:mavericks] = 'foo'
      expect(subject.send(:find_matching_tag, :mavericks)).to eq(:mavericks)
      expect(subject.send(:find_matching_tag, :yosemite)).to be_nil
    end
    
        filename = Filename.create(formula, tag, spec.rebuild)
    @resource.url('#{spec.root_url}/#{filename.bintray}',
                  select_download_strategy(spec.root_url_specs))
    @resource.version = formula.pkg_version
    @resource.checksum = checksum
    @prefix = spec.prefix
    @cellar = spec.cellar
    @rebuild = spec.rebuild
  end
    
    puts 'Bundler configured! Please run 'bin/bundle install' now.'

    
          def fetch_public_key_from_json(string, jwt)
        json = JSON.parse(string)
        keys = json['keys']
        public_key = get_key_from_kid(keys, jwt.header['kid'])
        public_key
      end
    
        respond_to do |format|
      format.html
      format.xml { render :xml => @notifications.to_xml }
      format.json {
        render json: render_as_json(@unread_notification_count, @grouped_unread_notification_counts, @notifications)
      }
    end
  end
    
          def lines
        lines = []
        @diff.diff.split('\n')[2..-1].each_with_index do |line, line_index|
          lines << { :line  => line,
                     :class => line_class(line),
                     :ldln  => left_diff_line_number(0, line),
                     :rdln  => right_diff_line_number(0, line) }
        end if @diff
        lines
      end
    
          def has_header
        @header = (@page.header || false) if @header.nil? && @page
        !!@header
      end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
    desc 'Build and install'
task :install => :build do
  sh 'gem install --local --no-ri --no-rdoc pkg/#{name}-#{version}.gem'
end
    
      def destroy?
    update?
  end
    
      private
    
          now = Time.current
      @user.onboarding_package_requested_again = true if @user.onboarding_package_requested
      @user.onboarding_package_requested = true
      @user.onboarding_package_form_submmitted_at = now
      @user.personal_data_updated_at = now
      @user.shipping_validated_at = now if user_params[:shipping_validated] == '1'
      if @user.save!
        format.html { redirect_to '/freestickers/edit' }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end
    
    RSpec.configure do |config|
  config.order = 'random'
end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
        context 'master' do
      let(:version) { 'master' }
      it { is_expected.to eq Float::INFINITY }
    end
    
        context 'synchronization disabled' do
      let(:synchronize) { false }