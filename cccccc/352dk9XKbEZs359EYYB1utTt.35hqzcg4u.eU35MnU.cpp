
        
        SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      if (!wasInline) delete[] oldBegin;
    
      if (auto ptr = type->getAs<clang::PointerType>()) {
    auto pointee = ptr->getPointeeType();
    }
    
    
    {} // namespace nwapi

    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
       bool GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const override;
    
    typedef std::map<std::string,std::string> KeyMap;
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearCacheFunction);
};
    
        bool Read(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return ReadText(data);
        break;
        case TYPE_HTML:
        return ReadHTML(data);
        break;
        case TYPE_RTF:
        return ReadRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return ReadImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;      
    }
    
    
    {private:
};
    
    FC_REFLECT( eosio::wallet::plain_keys, (checksum)(keys) )

    
       wallet_plugin();
   wallet_plugin(const wallet_plugin&) = delete;
   wallet_plugin(wallet_plugin&&) = delete;
   wallet_plugin& operator=(const wallet_plugin&) = delete;
   wallet_plugin& operator=(wallet_plugin&&) = delete;
   virtual ~wallet_plugin() override = default;
    
    BOOST_AUTO_TEST_SUITE_END()

    
    namespace proxy {
    }
    
    
    {   if( context == vote.author ) {
      static post_record post;
      eosio_assert( Db::get( vote.postid, post ) > 0, 'unable to find post' );
      eosio_assert( now() - post.created < days(7), 'cannot vote after 7 days' );
      post.votes += vote.vote_power;
      Db::store( vote.postid, post );
   } 
   else if( context == vote.voter ) {
      static account vote_account;
      Db::get( 'account', vote_account );
      auto abs_vote = abs(vote.vote_power);
      vote_account.vote_power = min( vote_account.social_power,
                                     vote_account.vote_power + (vote_account.social_power * (now()-last_vote)) / days(7));
      eosio_assert( abs_vote <= vote_account.vote_power, 'insufficient vote power' );
      post.votes += vote.vote_power;
      vote_account.vote_power -= abs_vote;
      vote_account.last_vote  = now();
      Db::store( 'account', vote_account );
   } else {
      eosio_assert( false, 'invalid context for execution of this vote' );
   }
}